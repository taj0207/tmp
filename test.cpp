

#include<vector>
#include<iostream>
using namespace std;



vector<vector<char> > p(vector<char>& input,int n) 
{

  vector<vector<char> > ret;
  if(n==0) return ret;
  vector<vector<char> > tmp;
  vector<char> output;
  for(int i=0;i<input.size();++i)
  {
    tmp = p(input,n-1);
    for(int i=0;i<tmp.size();++i)
    {
      vector<char> v = tmp[i];
      v.insert(v.begin(), input[i]);
      ret.push_back(v);
    }
  }
  return ret;
}

int main()
{
  int n;
  cin>>n;
   vector<char> input(n);
  for(int i=0;i<n;++i)
    cin>> input[i];
  vector<vector<char> > ret = p(input,n);
  for(int i=0;i<ret.size();++i)
  {
    for(int j=0;j<ret[i].size();++j)
      cout << ret[i][j];
      cout << ", ";
  }
  if(ret.size() !=0) cout << "\b\b  "<<endl;
}
