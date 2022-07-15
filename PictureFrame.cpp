#include <bits/stdc++.h>
using namespace std;

/*
上下の#で蓋するのを別々に書くしか思いつかなかった。
vecの宣言で10000にしてるけど最適なサイズを入力を見てから動的に取れたりできる？
*/
 
int main() {
  int Height,Width;
  vector<char> vec(10000);
  cin >> Height;
  cin >> Width;
  for (int i = 0; i<Height; i++){
    for(int j = 0; j<Width; j++){
        cin >> vec.at(j+100*i);
    }
  }
  for(int i=0;i<Width+2;i++){
    cout <<'#';
  }
  cout<< endl;

  for(int i=0; i<Height; i++){
    cout << '#';
    for(int j=0; j<Width;j++){
      cout << vec.at(j+100*i);
    }
    cout << '#' << endl;
  }
  
  for(int i=0;i<Width+2;i++){
    cout <<'#';
  }
  cout<< endl;
  
  return 0;
}

