// # include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,k;
//         cin>>n>>k;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         sort(arr,arr+n);
//         if(k>=n){
//             cout<<arr[n-1]<<endl;
//         }
//         else{
//             cout<<arr[k]<<endl;
//         }
//     }
//     return 0;
// }

// # include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         string s;
//         cin>>s;
//         int flag = -1;
//         int count=0;
//         for(int i=0;i<n;i++){
//             if(s[i]=='0'){
//                 count++;
//             }
//         }
//         for(int i=0;i<n-1;i++){
//             if(s[i] == '1' && s[i+1] == '1'){
//                 // cout<<"in loop"<<endl;
//                 flag = 0;
//                 break;
//             }
//         }
//         if(count == n){
//             cout<<0<<endl;
//         }
//         else if(flag == -1){
//             cout<<1<<endl;
//         }
//         else if(flag == 0){
//             cout<<2<<endl;
//         }
//     }
//     return 0;
// }

// # include<iostream>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         int count=0;
//         for(int i=0;i<n-1;i++){
//             if(arr[i]+1==arr[i+1]){
//                 count++;
//             }
//         }
//         if(count == n){
//             cout<<count<<endl;
//         }
//         else{
//             cout<<count+2<<endl;
//         }
//     }
//     return 0;
// }

// # include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         int counto=0;
//         int counte=0;
//         for(int i=0;i<n;i++){
//             if(arr[i]%2==0){
//                 counte++;
//             }
//             else{
//                 counto++;
//             }
//         }
//         if(counte==0||counto==0){
//             cout<<0<<endl;
//         }
//         else if(counto%2==0){
//             cout<<counto/2<<endl;
//         }
//         else{
//             cout<<counte<<endl;
//         }
//     }
//     return 0;
// }

// # include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string sx,sy;
//     cin>>sx;
//     cin>>sy;
//     int arr[27]={0};
//     for(int i=0;i<sx.length();i++){
//         arr[sx[i]-96]++;
//     }
//     for(int i=0;i<sy.length();i++){
//         arr[sy[i]-96]++;
//     }
//     vector<char> v;
//     for(int i=0;i<=27;i++){
//         if(arr[i]>=2){
//             v.push_back(i+96);
//         }
//     }
//     for(int i=0;i<=27;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     for(int i=0;i<v.size()-1;i++){
//         cout<<v[i];
//     }
//     return 0;
// }

// # include<bits/stdc++.h>
// using namespace std;

// int solution(string x,string y,int n,int m){
//     if(n==0||m==0){
//         return 0;
//     }
//     if(x[n-1] == y[m-1]){
//         return 1+solution(x,y,n-1,m-1);
//     }
//     else{
//         return max(solution(x,y,n-1,m),solution(x,y,n,m-1));
//         // int count= solution(x,y,n-1,m);
//         // count+=solution(x,y,n,m-1);
//         // return count;
//     }
// }

// int main(){
//     string x,y;
//     cin>>x;
//     cin>>y;
//     cout<<solution(x,y,x.length(),y.length())<<endl;
//     return 0;
// }

// # include<iostream>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         int counto=0,counte=0;
//         for(int i=0;i<=n;i++){
//             if(arr[i]%2==0){
//                 counte++;
//             }
//             else{
//                 counto++;
//             }
//         }
//         int ans=0;
//         if(counto==0 || counte==0){
//             ans=0;
//         }
//         else if(counto%2!=0){
//             ans=counte;
//         }
//         else{
//             ans=min(counte,counto/2);
//         }
//     }
//     return 0;
// }

// # include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     int target;
//     cin>>target;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int count=0;
//     for(int i=0;i<n;i++){
//         int l=i+1;
//         int r=n-1;
//         while(l<r){
//             if(arr[i]+arr[l]+arr[r] == target){
//                 count++;
//             }
//             else if(arr[i]+arr[l]+arr[r]<target){
//                 i++;
//             }
//             else{
//                 r--;
//             }
//         }
//     }
//     cout<<count<<endl;
//     return 0;
// }

// # include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     int ans=0;
//     while(t--){
//         string s;
//         cin>>s;
//         int ch=0;
//         for(int i=0;i<s.length();i++){
//             if(s[i]=='+'){
//                 ans=ans+1;
//                 break;
//             }
//             else if(s[i] == '-'){
//                 ans = ans-1;
//                 break;
//             }
//         }
//     }
//     cout<<ans<<endl;
//     return 0;
// }

// # include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string s;
//     cin>>s;
//     // string ans;

//     for(int i=0;i<s.length();i++){
//         if(s[i] == '9' && i==0){
//             cout<<'9';
//         }
//         else if(s[i]>='5'){
//             cout<<'9'-s[i];
//         }
//         else{
//             cout<<s[i];
//         }
//     }
//     return 0;
// }

// # include<iostream>
// using namespace std;

// int main(){
//     int arr[5][5];
//     for(int i=0;i<25;i++){
//         for(int j=0;j<25;j++){
//             cin>>arr[i][j];
//         }
//     }
//     int x,y;
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             if(arr[i][j] == 1){
//                 x=i;
//                 y=j;
//                 // cout<<i<<" "<<j<<endl;
//                 break;
//             }
//         }
//     }
//     int a=x-2;
//     int b=y-2;
//     // cout<<a<<" "<<b<<endl;
//     if(a<0){
//         a=a*(-1);
//     }
//     if(b<0){
//         b=b*(-1);
//     }

//     cout<<a+b<<endl;

//     return 0;
// }

// # include<iostream>
// using namespace std;

// int main(){
//     int n,k,l,c,d,p,nl,np;
//     cin>>n>>k>>l>>c>>d>>p>>nl>>np;
//     int a=(k*l)/nl;
//     int b=(c*d);
//     int c1 = p/np;
//     int ans= min(a,min(b,c1))/n;
//     cout<<ans<<endl;
//     return 0;
// }

// # include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int x1,x2,x3;
//     cin>>x1>>x2>>x3;
//     int a = max(x1,max(x2,x3));
//     int c = min(x1,min(x2,x3));
//     int b = 0;
//     if(x1!=a || x1!=c){
//         b=x1;
//     }
//     else if(x2!= a || x2!=c){
//         b=x2;
//     }
//     else{
//         b=x3;
//     }
//     cout<<(a-b)+(b-c)<<endl;

//     return 0;
// }

// # include<iostream>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     int count = 0;
//     while(t--){
//         int n;
//         cin>>n;
//         int copy = n;
//         int count = 0;
//         while(copy!=0){
//             if(copy%10!=0){
//                 count++;
//             }
//             copy/=10;
//         }
//         cout<<count<<endl;
//         int ans=1;
//         while(n!=0){
//             int remain = n%10;
//             ans = ans*10;
//             if(ans*remain!=0){
//                 cout<<(ans*remain)/10<<" ";
//             }
//             n/=10;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// # include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,x;
//         cin>>n>>x;
//         int val = x*n;
//         vector<int> ans;
//         if(n%2==0){
//             if(x==0){
//                 int j=1;
//                 while(ans.size()!=n){
//                     ans.push_back(j);
//                     ans.push_back(-j);
//                     j++;
//                 }
//             }
//             else{
//             ans.push_back(val);
//             ans.push_back(0);
//             int i=1;
//             while(ans.size()!=n){
//                 // if(val == i){
//                 //     i++;
//                 //     continue;
//                 // }
//                 ans.push_back(i);
//                 ans.push_back(-(i));
//                 i++;
//             }
//         }
//         }
//         else{
//             ans.push_back(val);
//             int i=1;
//             while(ans.size()!=n){
//                 // if(val == i){
//                 //     i++;
//                 //     continue;
//                 // }
//                 ans.push_back(i);
//                 ans.push_back(-(i));
//                 i++;
//             }
//         }
//         for(int i=0;i<ans.size();i++){
//             cout<<ans[i]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// # include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         ll n,m;
//         cin>>n>>m;
//         ll ans = 0;
//         ll a = min(n,m);
//         if(a!=1 || a!=2){
//             ans = (a-1)*2;
//         }
//         else{
//             ans = a;
//         }
//         ll b = max(n,m);
//         ll c = b-a;
//         if(a == 1 && c>1){
//             ans = -1;
//         }
//         else if(c%2==0){
//             ans=ans+2*c;
//         }
//         else{
//             ans = ans+(2*c-1);
//         }
//         cout<<ans<<endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         ll n, m;
//         cin >> n >> m;
//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         sort(arr, arr + n, greater<int>());
//         ll ans = 0;
//         ans = 2 * arr[0] + 1;
//         for (int i = 1; i < n-1; i++)
//         {
//             ans = ans + (arr[i] + 1);
//         }
//         ans = ans+1;
//         if (ans > m)
//         {
//             cout << "NO" << endl;
//         }
//         else
//         {
//             cout << "YES" << endl;
//         }
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;

// int main()
// {
//     ll n;
//     cin >> n;
//     ll a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     ll arrb[n] = {0};
//     int ans = INT_MAX;
//     for (int z = 0; z < n; z++)
//     {
//         int ans1 = 0;
//         int prev = 0;
//         for (int i = z - 1; i >= 0; i--)
//         {
//             int op = prev / a[i];
//             op++;
//             ans1 += op;
//             prev = a[i] * op;
//         }
//         prev = 0;
//         for (int i = z + 1; i < n; i++)
//         {
//             int op = prev / a[i];
//             op++;
//             ans1 += op;
//             prev = a[i] * op;
//         }
//         ans = min(ans,ans1);
//     }
//     cout<<ans<<endl;
//     return 0;
// }

// # include<iostream>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         if(n<=1399){
//             cout<<"Division 4"<<endl;
//         }
//         else if(n<=1599){
//             cout<<"Division 3"<<endl;
//         }
//         else if(n<=1899){
//             cout<<"Division 2"<<endl;
//         }
//         else if(n>=1900){
//             cout<<"Division 1"<<endl;
//         }
//     }
//     return 0;
// }

// # include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         map<int,int> m;
//         map<int,int>::iterator it;
//         for(int i=0;i<n;i++){
//             m[arr[i]]++;
//         }
//         int ans=-1;
//         for(it = m.begin();it!=m.end();it++){
//             if(it->second >=3){
//                 ans = it->first;
//                 break;
//             }
//         }
//         cout<<ans<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         int check1 = 0;
//         int check2 = 0;
//         if (arr[0] % 2 == 0)
//         {
//             check1 = 2;
//         }
//         else
//         {
//             check1 = 1;
//         }
//         if (arr[1] % 2 == 0)
//         {
//             check2 = 2;
//         }
//         else
//         {
//             check2 = 1;
//         }
//         int c1, c2;
//         int ans = 0;
//         for (int i = 2; i < n; i++)
//         {
//             if (i % 2 == 0)
//             {
//                 if (arr[i] % 2 == 0)
//                 {
//                     c1 = 2;
//                 }
//                 else
//                 {
//                     c1 = 1;
//                 }
//                 if (c1 != check1)
//                 {
//                     ans = 1;
//                     break;
//                 }
//             }
//             else
//             {
//                 if (arr[i] % 2 == 0)
//                 {
//                     c2 = 2;
//                 }
//                 else
//                 {
//                     c2 = 1;
//                 }
//                 if (c2 != check2)
//                 {
//                     ans = 1;
//                     break;
//                 }
//             }
//         }
//         if(ans == 0){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s;
//         cin >> s;
//         int ans = 0;
//         vector<int> a, b;
//         for (int i = 0; i < s.length(); i++)
//         {
//             if (s[i] == 'a')
//             {
//                 a.push_back(i);
//             }
//             else
//             {
//                 b.push_back(i);
//             }
//         }
//         if (a.size() == 1 || b.size() == 1)
//         {
//             ans = 1;
//         }
//         if (a.size() > 1)
//         {
//             for (int i = 0; i < a.size() - 1; i++)
//             {
//                 if (a[i + 1] - a[i] > 1)
//                 {
//                     ans = 1;
//                 }
//             }
//         }
//         if (b.size() > 1)
//         {
//             for (int i = 0; i < b.size() - 1; i++)
//             {
//                 if (b[i + 1] - b[i] > 1)
//                 {
//                     ans = 1;
//                 }
//             }
//         }
//         if (ans == 0)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s;
//         cin >> s;
//         int ans = 0;
//         if (s.length() > 2)
//         {
//             for (int i = 0; i < s.length() - 2; i++)
//             {
//                 if (s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'a')
//                 {
//                     // cout<<i<<endl;
//                     ans = 1;
//                 }
//                 else if (s[i] == 'b' && s[i + 1] == 'a' && s[i + 2] == 'b')
//                 {
//                     // cout<<i<<endl;
//                     ans = 1;
//                 }
//                 else if(s[s.length()-1] == 'b' && s[s.length()-2] == 'a'){
//                     ans = 1;
//                 }
//                 else if(s[s.length()-1] == 'a' && s[s.length()-2] == 'b'){
//                     ans = 1;
//                 }
//                 else if(s[0] == 'a' && s[1] == 'b'){
//                     ans =1;
//                 }
//                 else if(s[0] == 'b' && s[1] == 'a'){
//                     ans = 1;
//                 }
//             }
//         }
//         if (s.length() == 1)
//         {
//             ans = 1;
//         }
//         if (s.length() == 2)
//         {
//             if (s[0] != s[1])
//             {
//                 ans = 1;
//             }
//         }
//         if (ans == 0)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         vector<int> v;
//         int ans = 0;
//         for (int i = 0; i < n - 1; i++)
//         {
//             v.push_back(arr[i + 1] - arr[i]);
//         }
//         if (n > 1)
//         {
//             int count2 = 0;
//             int count3 = 0;
//             for (int i = 0; i < v.size(); i++)
//             {
//                 if (v[i] > 3)
//                 {
//                     ans = 1;
//                     break;
//                 }
//                 if(v[i] == 2){
//                     count2++;
//                 }
//                 if(v[i] == 3){
//                     count3++;
//                 }
//             }
//             if(count2 > 0 && count3>0){
//                 ans = 1;
//             }
//             if(count3>1){
//                 ans = 1;
//             }
//             if(count2 > 2){
//                 ans = 1;
//             }
//         }
//         if (ans == 1)
//         {
//             cout << "NO" << endl;
//         }
//         else
//         {
//             cout << "YES" << endl;
//         }
//     }
//     return 0;
// }

// t=int(input())
// for _ in range(t):
//     n,x=map(int,input().split())
//     a=list(map(int,input().split()))
//     day=0
//     a=sorted(a,reverse=True)
//     s=sum(a)
//     res=0
//     k=0
//     while True:
//         if s<=x:
//             res+=n
//         else:
//             ans=s
//             flag=0
//             for i in range(n):
//                 ans-=(a[i]+day)
//                 if ans<=x:
//                     res+=(n-(i+1))
//                     flag=1
//                     break
//             if flag==0:
//                 break
//         day+=1
//         s+=n
//         if a[-1]+day>x:
//             break
//     print(res)

// # include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         ll x;
//         cin>>n>>x;
//         ll arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         int ans= 0;
//         ll sum = 0;
//         for(int i=0;i<n;i++){
//             sum+=arr[i];
//         }
//         while(x>=sum){
//             ans++;
//             sum=sum+n;
//         }
//         while(true){
//             ll sum1=0;
//             int m=0;
//             for(int i=0;i<n;i++){
//                 if(x>sum1){
//                     m++;
//                     sum1=sum1+arr[i];
//                 }
//             }

//         }

//     }
//     return 0;
// }

// # include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int> v(n);
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//         }
//         int count = 0;
//         int i=0;
//         int ans = 0;
//         sort(v.begin(),v.end());
//         while(i<n){
//             if(v[i] == 2){
//                 count++;
//                 i++;
//             }
//             else if(v[i] == 3){
//                 count++;
//                 v[i] = 2;
//                 i++;
//             }
//             else if(v[i] == 1){
//                 i++;
//             }
//             else if(v[i] % 2 == 0){
//                 count++;
//                 v[i] = v[i]/2;
//                 v.push_back(v[i]/1);
//             }
//             else if(v[i] % 2 != 0){
//                 count++;
//                 v[i] = v[i]/2;
//                 v.push_back(v[i]/2+1);
//             }
//         }
//         // cout<<count<<endl;
//         if(count%2!=0){
//             ans = 1;
//         }
//         if(n==1 || count == 0){
//             ans = 1;
//         }
//         if(ans==1){
//             cout<<"maomao90"<<endl;
//         }
//         else{
//             cout<<"errorgorn"<<endl;
//         }

//     }
//     return 0;
// }

// # include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         string s;
//         cin>>s;
//         int counta=0;
//         int countb=0;
//         int ans =0;
//         for(int i=0;i<s.length();i++){
//             if(s[i] == 'A'){
//                 counta++;
//             }
//             else if(s[i] == 'B'){
//                 if(countb>=counta){
//                     ans = 1;
//                     break;
//                 }
//                 else{
//                     countb++;
//                 }
//             }
//         }
//         if(s[s.length()-1] != 'B'){
//             ans = 1;
//         }
//         if(ans==1){
//             cout<<"NO"<<endl;
//         }
//         else{
//             cout<<"YES"<<endl;
//         }
//     }
//     return 0;
// }

// # include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         ll arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         int i=0;
//         int count = 0;
//         while(i<n){
//             if(arr[i] == arr[i+1]){
//                 count++;
//                 i+=2;
//             }
//             else{
//                 i++;
//             }
//         }
//         cout<<count<<endl;
//     }
//     return 0;
// }

// # include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         int ans = 0;
//         int i=0;
//         while(i<n){
//             if(arr[i+1] == arr[i]){
//                 break;
//             }
//             else{
//                 i++;
//             }
//         }
//         int j=n-1;
//         while(j>0){
//             if(arr[j] == arr[j-1]){
//                 break;
//             }
//             else{
//                 j--;
//             }
//         }
//         if(j-1 > i+1){
//             ans = j-1-i-1;
//         }
//         else if(j-1 == i+1){
//             ans = 1;
//         }
//         cout<<ans<<endl;
//     }
//     return 0;
// }

// test=int(input())
// for j in range(test):
//     n=int(input())
//     arr=list(map(int,input().split()))
//     if n==1 and arr[0]==1:
//         print("maomao90")
//     elif len(list(set(arr)))==1 and arr[0]==1:
//         print("maomao90")
//     else:
//         arr=sorted(arr,reverse=True)
//         i=0
//         count1=0
//         while arr[i]!=1:
//             if int(arr[i]%2)==0:
//                 ans=arr[i]
//                 if ans!=2:
//                     arr.pop(i)
//                     arr.insert(0,int(ans/2))
//                     arr.insert(0,int(ans/2))
//                 else:
//                     arr.pop(i)
//                     arr.append(1)
//                     arr.append(1)
//             else:
//                 ans=arr[i]
//                 if ans!=3:
//                     arr.pop(i)
//                     arr.insert(0,int(ans/2))
//                     arr.insert(0,int(ans/2)+1)
//                 else:
//                     arr.pop(i)
//                     arr.insert(0,2)
//                     arr.append(1)
//             count1+=1
//         if int(count1%2)==0:
//             print("maomao90")
//         else:
//             print("errorgorn")

// # include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int arra[n];
//         int arrb[n];
//         for(int i=0;i<n;i++){
//             cin>>arra[i];
//         }
//         for(int i=0;i<n;i++){
//             cin>>arrb[i];
//         }
//         int ans = 0;
//         int i=0;
//         int j=n-1;
//         while(i<j){
//             if(arra[i] != arrb[i] && arra[i])
//         }
//     }
//     return 0;
// }

// # include<iostream>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         for(int i=0;i<n;i++){
//             arr[i]=arr[i]-1;
//         }
//         int a=0;
//         for(int i=0;i<n;i++){
//             a=a^arr[i];
//         }
//         // cout<<a<<endl;
//         if(a==0){
//             cout<<"maomao90"<<endl;
//         }
//         else{
//             cout<<"errorgorn"<<endl;
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// void solution(string s,int n)
// {
//     int lc = 0;
//     int up = 0;
//     int no = 0;
//     int sc = 0;
//     vector<char> ns;
//     for (int i = 0; i < n; i++)
//     {
//         ns.push_back(s[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (s[i] >= 48 && s[i] <= 57)
//         {
//             no = 1;
//         }
//         else if (s[i] >= 65 && s[i] <= 90)
//         {
//             up = 1;
//         }
//         else if (s[i] >= 97 && s[i] <= 122)
//         {
//             lc = 1;
//         }
//         else if (s[i] == '@' || s[i] == '#' || s[i] == '*' || s[i] == '&')
//         {
//             sc = 1;
//         }
//     }
//     if (lc == 0)
//     {
//         ns.push_back('a');
//     }
//     if (up == 0)
//     {
//         ns.push_back('B');
//     }
//     if (no == 0)
//     {
//         ns.push_back('2');
//     }
//     if (sc == 0)
//     {
//         ns.push_back('#');
//     }
//     while(ns.size()<7){
//         ns.push_back('1');
//     }
//     for (int i = 0; i < ns.size(); i++)
//     {
//         cout << ns[i];
//     }
//     cout << endl;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
//         cout<<"Case #"<<t<<" ";
//         solution(s,n);
//     }
//     return 0;
// }


// # include<bits/stdc++.h>
// using namespace std;

// void solution(int n,int x,int y){
//     int sum = (n*(n+1))/2;
//     int a = max(x,y);
//     int b = min(x,y);
//     float c = a/b;
//     c=c+1;
//     float ans = sum/c;
//     int ans1 = sum/c;
//     if(ans == ans1){
//         cout<<"POSSIBLE"<<endl;
//         cout<<1<<endl;
//         cout<<ans1<<endl;
//     }
//     else{
//         cout<<"IMPOSSIBLE"<<endl;
//     }
// }

// int main(){
//     int i=1;
//     int t;
//     cin>>t;
//     while(i<=t){
//         int n,x,y;
//         cin>>n>>x>>y;
//         cout<<"Case #"<<i<<": ";
//         solution(n,x,y);
//         i++;
//     }    
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
 
// dp[i][j] is going to store true if sum j is
// possible with array elements from 0 to i.
bool** dp;

vector<vector<int>> v1;

void display(const vector<int>& v)
{
    
    v1.push_back(v);
    return;
}
 
// A recursive function to print all subsets with the
// help of dp[][]. Vector p[] stores current subset.
void printSubsetsRec(int arr[], int i, int sum, vector<int>& p)
{
    // If we reached end and sum is non-zero. We print
    // p[] only if arr[0] is equal to sum OR dp[0][sum]
    // is true.
    if (i == 0 && sum != 0 && dp[0][sum])
    {
        p.push_back(arr[i]);
        // Display Only when Sum of elements of p is equal to sum
          if (arr[i] == sum)
              display(p);
        return;
    }
 
    // If sum becomes 0
    if (i == 0 && sum == 0)
    {
        display(p);
        return;
    }
 
    // If given sum can be achieved after ignoring
    // current element.
    if (dp[i-1][sum])
    {
        // Create a new vector to store path
        vector<int> b = p;
        printSubsetsRec(arr, i-1, sum, b);
    }
 
    // If given sum can be achieved after considering
    // current element.
    if (sum >= arr[i] && dp[i-1][sum-arr[i]])
    {
        p.push_back(arr[i]);
        printSubsetsRec(arr, i-1, sum-arr[i], p);
    }
}
 
// Prints all subsets of arr[0..n-1] with sum 0.
void printAllSubsets(int arr[], int n, int sum)
{
    if (n == 0 || sum < 0)
       return;
 
    // Sum 0 can always be achieved with 0 elements
    dp = new bool*[n];
    for (int i=0; i<n; ++i)
    {
        dp[i] = new bool[sum + 1];
        dp[i][0] = true;
    }
 
    // Sum arr[0] can be achieved with single element
    if (arr[0] <= sum)
       dp[0][arr[0]] = true;
 
    // Fill rest of the entries in dp[][]
    for (int i = 1; i < n; ++i)
        for (int j = 0; j < sum + 1; ++j)
            dp[i][j] = (arr[i] <= j) ? dp[i-1][j] ||
                                       dp[i-1][j-arr[i]]
                                     : dp[i - 1][j];
    if (dp[n-1][sum] == false)
    {
        printf("There are no subsets with sum %d\n", sum);
        return;
    }
 
    // Now recursively traverse dp[][] to find all
    // paths from dp[n-1][sum]
    vector<int> p;
    printSubsetsRec(arr, n-1, sum, p);
}
 
// Driver code
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 10;
    printAllSubsets(arr, n, sum);
    for(int i=0;i<v1[0].size();i++){
        cout<<v1[0][i]<<" ";
    }
    return 0;
}