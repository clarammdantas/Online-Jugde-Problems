// Multiples os 3
// Clara Moraes Dantas

#include <bits/stdc++.h>

using namespace std;

#define N 100010

int lazy[4 * N], n, m;
pair<int, int> segTree[4 * N], nil;

pair<int, int> combine(pair<int, int> c, pair<int, int> m) {
    pair<int, int> res;
    res.first = c.first + m.first;
    res.second = c.second + m.second;

    return res;
}

void build(int k, int l, int r) {
    if (l == r){
        segTree[k] = make_pair(1, 0);
        return;
    }

    int mid = (l + r) / 2;
    build(k * 2, l, mid);
    build(k * 2 + 1, mid + 1, r);
    segTree[k] = combine(segTree[k * 2], segTree[k * 2 + 1]);
}

void lazy_update(int k, int l, int r) {
    lazy[k] %= 3;

    int op1 = segTree[k].first, op2 = segTree[k].second;
    int op3 = (r - l + 1) - op1 - op2;

    if (lazy[k] == 0) return;

    if (lazy[k] == 1) {
        segTree[k].first = op3;
        segTree[k].second = op1;
    }

    else {
        segTree[k].first = op2;
        segTree[k].second = op3;
    }

    if (l < r) {
        lazy[k * 2] += lazy[k];
        lazy[k * 2 + 1] += lazy[k];
    }

    lazy[k] = 0;
}

pair<int, int> query(int k, int l, int r, int qL, int qR) {
    lazy_update(k, l, r);

    if (r < qL || qR < l) return nil;

    if (l == qL && r == qR) return segTree[k];

    int mid = (l + r) / 2;
    if (mid < qL) return query(k * 2 + 1, mid + 1, r, qL, qR);
    if (qR < mid + 1) return query(k * 2, l, mid, qL, qR);

    return combine(query(k * 2, l, mid, qL, mid), query(k * 2 + 1, mid + 1, r, mid + 1, qR));
}

void segTree_update(int k, int l, int r, int qL, int qR) {
    lazy_update(k, l, r);

    if (r < qL || qR < l) return ;

    if (qL <= l && r <= qR) {
        lazy[k] += 1;
        lazy_update(k, l, r);
        return ;
    }

    int mid = (l + r) / 2;
    segTree_update(k * 2, l, mid, qL, qR);
    segTree_update(k * 2 + 1, mid + 1, r, qL, qR);

    segTree[k] = combine(segTree[k * 2], segTree[k * 2 + 1]);
}

int main() {
    scanf("%d %d\n", &n, &m);
    nil = make_pair(0, 0);
    build(1, 1, n);

    while(m--) {
        int operation, l, r;

        scanf("%d %d %d\n", &operation, &l, &r);
        l++; r++;

        if (operation == 0) segTree_update(1, 1, n, l, r);
        else printf("%d\n", query(1, 1, n, l, r).first);
    }

    return 0;
}
