int walkOnMyOwnPath(int path[], int pos[], int size, int time) {
  int map[100000];
  int restPeople[10] = {};
  int restPeopleCnt = size;

  for (int i = 0; i < 100000; ++i) {
    map[i] = -1;
  }

  for (int i = 0; i <= time; ++i) {
    if (restPeopleCnt == 0) {
       break;
    }
    for (int j = 0; j < size; ++j) {
      if (restPeople[j]) {
	continue;
      }
      if (map[pos[j]] == -1) {
	map[pos[j]] = j;
      }
      else if (map[pos[j]] != j) {
	return i;
      }
      else {
	restPeople[j] = 1;
	restPeopleCnt--;
      }
      pos[j] = path[pos[j]];
    }
  }
  return -1;
}
