int getDis(int x1, int y1, int x2, int y2) {
  return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}

bool isValid(int bCnt, int mCnt, int cCnt, int baba[20005], int mei[20005], int cat[20005], int x, int y) {
  const int BM_MAX_DIS = 100;
  const int C_MAX_DIS = 144;

  bool isInB = false, isInM = false, isInC = false;
  
  for (int i = 0; i < bCnt; i++) {
    int dis = getDis(x, y, baba[i * 2], baba[i * 2 + 1]);
    if (dis <= BM_MAX_DIS) {
      isInB = true;
    }
  }

  for (int i = 0; i < mCnt; i++) {
    int dis = getDis(x, y, mei[i * 2], mei[i * 2 + 1]);
    if (dis <= BM_MAX_DIS) {
      isInM = true;
    }
  }

  for (int i = 0; i < cCnt; i++) {
    int dis = getDis(x, y, cat[i * 2], cat[i * 2 + 1]);
    if (dis <= C_MAX_DIS) {
      isInC = true;
    }
  }

  return isInB and isInM and isInC;
}
