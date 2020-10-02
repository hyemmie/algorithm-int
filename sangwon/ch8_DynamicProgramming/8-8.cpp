#include <iostream>
#include <string>
#include <vector>


int n, triangle[100][100];
int cache[100][100][MAX_NUMBER * 100 + 1];

int path(int , int x, int sum) {
    if(y == n-1) return sum + triangle[y][x];
    // 메모이제이션
    int& ret cache[y][x][sum];
    if(ret != -1) return ret;
    sum += triangle[y][x];
    return ret = max(path1(y+1, x+1, sum), path1(y+1, x, sum));
}