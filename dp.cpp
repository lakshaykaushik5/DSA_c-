                                //    unbounded-knapsack

// # include<bits/stdc++.h>
// using namespace std;

// int d_p[1000][1000];

// int unbounded_knapsack(int w[],int val[],int wt,int n){
//     if(n==0||wt==0){
//         return 0;
//     }
//     if(w[n-1]<=wt){
//         return max(val[n-1]+unbounded_knapsack(w,val,wt-w[n-1],n) , unbounded_knapsack(w,val,wt,n-1));
//     }
//     else{
//         return unbounded_knapsack(w,val,wt,n-1);
//     }
// }

// int unbounded_knapsack_memoize(int w[],int val[],int wt,int n){
//     if(n==0||wt==0){
//         return 0;
//     }
//     if(d_p[n][wt] > 0){
//         return d_p[n][wt];
//     }
//     if(w[n-1]<=wt){
//         d_p[n][wt] = max(val[n-1]+unbounded_knapsack_memoize(w,val,wt-w[n-1],n),unbounded_knapsack_memoize(w,val,wt,n-1));
//     }
//     else{
//         d_p[n][wt] = unbounded_knapsack_memoize(w,val,wt,n-1);
//     }
//     return d_p[n][wt];
// }

// int unbounded_knapsack_td(int w[],int val[],int wt,int n){
//     int dp[n+1][wt+1];
//     memset(dp,0,sizeof(dp));
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=wt;j++){
//             if(w[i-1]<=j){
//                 dp[i][j] = max(val[i-1]+dp[i][j-w[i-1]],dp[i-1][j]);
//             }
//             else{
//                 dp[i][j] = dp[i-1][j];
//             }
//         }
//     }
//     return dp[n][wt];
// }

// int main(){
//     int n;
//     cin>>n;
//     int w[n],val[n];
//     int wt;
//     cin>>wt;
//     for(int i=0;i<n;i++){
//         cin>>w[i]>>val[i];
//     }
//     memset(d_p,0,sizeof(d_p));
//     cout<<unbounded_knapsack_memoize(w,val,wt,n)<<endl;
//     return 0;
// }


                                //   rod cutting

// # include<bits/stdc++.h>
// using namespace std;

// int solution(int lt[],int price[],int l,int n){
//     if(l==0||n==0){
//         return 0;
//     }
//     if(lt[n-1]<=l){
//         return max(price[n-1]+solution(lt,price,l-lt[n-1],n),solution(lt,price,l,n-1));
//     }
//     else{
//         return solution(lt,price,l,n-1);
//     }
// }

// int solution_td(int lt[],int price[],int l,int n){
//     int dp[n+1][l+1];
//     memset(dp,0,sizeof(dp));
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=l;j++){
//             if(lt[i-1]<=j){
//                 dp[i][j] = max(price[i-1] + dp[i][j-lt[i-1]],dp[i-1][j]);
//             }
//             else{
//                 dp[i][j] = dp[i-1][j];
//             }
//         }
//     }
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=l;j++){
//             cout<<dp[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return dp[n][l];
// }

// int main(){
//     int n;
//     cin>>n;
//     int l;
//     cin>>l;
//     int lt[n];
//     int price[n];
//     for(int i=0;i<n;i++){
//         cin>>lt[i]>>price[i];
//     }
//     cout<<solution_td(lt,price,l,n)<<endl;
//     return 0;
// }

                //        coin problem max no of ways

// # include<bits/stdc++.h>
// using namespace std;

// int solution(int arr[],int sum,int n){
//     if(n==0){
//         return 0;
//     }
//     if(sum==0){
//         return 1;
//     }
//     int count1=0,count2=0;
//     if(arr[n-1]<=sum){
//         count1=solution(arr,sum-arr[n-1],n)+solution(arr,sum,n-1);
//     }
//     else{
//         count2=solution(arr,sum,n-1);
//     }
//     return count1+count2;
// }

// int solution_td(int arr[],int sum,int n){
//     int dp[n+1][sum+1];
//     memset(dp,0,sizeof(dp));
//     for(int i=0;i<=n;i++){
//         dp[i][0] = 1;
//     }
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=sum;j++){
//             if(arr[i-1]<=j){
//                 dp[i][j] = dp[i][j-arr[i-1]]+dp[i-1][j];
//             }
//             else{
//                 dp[i][j] = dp[i-1][j];
//             }
//         }
//     }
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=sum;j++){
//             cout<<dp[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return dp[n][sum];
// }

// int main(){
//     int n;
//     cin>>n;
//     int sum;
//     cin>>sum;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<solution_td(arr,sum,n)<<endl;
//     return 0;
// }

                        //    coin change min no of ways

// # include<bits/stdc++.h>
// using namespace std;

// int solution(int arr[],int sum,int n){
//     if(n==0){
//         return INT_MAX-1;
//     }
//     if(sum==0){
//         return 0;
//     }
//     if(arr[n-1]<=sum){
//         return  min(solution(arr,sum-arr[n-1],n),solution(arr,sum,n-1));
//     }
//     else{
//         return solution(arr,sum,n-1);
//     }
// }

// int solution_td(int arr[],int sum,int n){
//     int dp[n+1][sum+1];
//     memset(dp,0,sizeof(dp));
//     for(int i=0;i<=sum;i++){
//         dp[0][i] = INT_MAX-1;
//     }
//     for(int j=0;j<=sum;j++){
//         if(j%arr[1]==0){
//             dp[1][j] = j/arr[1];
//         }
//         else{
//             dp[1][j] = INT_MAX-1;
//         }
//     }
//     for(int i=2;i<=n;i++){
//         for(int j=1;j<=sum;j++){
//             if(arr[i-1]<=j){
//                 dp[i][j] = min(1+dp[i][j-arr[i-1]],dp[i-1][j]);
//             }
//             else{
//                 dp[i][j] = dp[i-1][j];
//             }
//         }
//     }
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=sum;j++){
//             cout<<dp[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return dp[n][sum];
// }

// int main(){
//     int n;
//     cin>>n;
//     int sum;
//     cin>>sum;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<solution_td(arr,sum,n)<<endl;
//     return 0;
// }


                            //   LCS

// # include<bits/stdc++.h>
// using namespace std;

// int d_p[1000][1000];

// int solution(string x,string y,int n,int m){
//     if(n==0||m==0){
//         return 0;
//     }
//     if(x[n-1] == y[m-1]){
//         return 1+solution(x,y,n-1,m-1);        
//     }
//     else{
//         return max(solution(x,y,n-1,m),solution(x,y,n,m-1));
//     }   
// }

// int solution_mem(string x,string y,int n,int m){
//     if(n==0||m==0){
//         return 0;
//     }
//     if(d_p[n][m]>0){
//         return d_p[n][m];
//     }
//     if(x[n-1]==y[n-1]){
//         d_p[n][m] = 1+solution(x,y,n-1,m-1);
//     }
//     else{
//         d_p[n][m] = max(solution(x,y,n-1,m),solution(x,y,n,m-1)); 
//     }
//     return d_p[n][m];
// }

// int solution_td(string x,string y,int n,int m){
//     int dp[n+1][m+1];
//     memset(dp,0,sizeof(dp));
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=m;j++){
//             if(x[i-1] == y[j-1]){
//                 dp[i][j] = 1+dp[i-1][j-1];
//             }
//             else{
//                 dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
//             }
//         }
//     }
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=m;j++){
//             cout<<dp[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return dp[n][m];
// }

// int main(){
//     string x,y;
//     cin>>x;
//     cin>>y;
//     cout<<solution_td(x,y,x.length(),y.length())<<endl;
//     return 0;
// }


                          //  longest common substring


// # include<bits/stdc++.h>
// using namespace std;

// int d_p[1000][1000];

// int solution(string x,string y,int n,int m,int count=0){
//     if(n==0 || m==0){
//         return count;
//     }
//     if(x[n-1]==y[m-1]){
//         count= solution(x,y,n-1,m-1,count+1);
//     }
//     else{
//         count= max(count,max(solution(x,y,n,m-1,0),solution(x,y,n-1,m,0)));
//     }
//     return count;
// }

// int solution_memo(string x,string y,int n,int m,int count=0){
//     if(n==0||m==0){
//         return count;
//     }
//     if(d_p[n][m]>0){
//         return d_p[n][m];
//     }
//     if(x[n-1] == y[m-1]){
//         count=solution(x,y,n-1,m-1,count+1);
//     }
//     else{
//         count =  max(count,max(solution(x,y,n-1,m,0),solution(x,y,n,m-1,0)));
//     }
//     d_p[n][m] = count;
//     return count;
// }

// int solution_td(string x,string y,int n,int m){
//     int dp[n+1][m+1];
//     memset(dp,0,sizeof(dp));
//     int count=0;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=m;j++){
//             if(x[i-1] == y[j-1]){
//                 dp[i][j] = dp[i-1][j-1]+1;
//                 count = max(count,dp[i][j]);
//             }
//             else{
//                 count = max(count,max(dp[i-1][j],dp[i][j-1]));
//                 dp[i][j] = 0;
//             }
//         }
//     }
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=m;j++){
//             cout<<dp[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return count;
// }

// int main(){
//     memset(d_p,0,sizeof(d_p));
//     string x,y;
//     cin>>x;
//     cin>>y;
//     cout<<solution_td(x,y,x.length(),y.length());
//     return 0;
// } 


                                //    printing LCS

// # include<bits/stdc++.h>
// using namespace std;

// int solution_td(string x,string y,int n,int m){
//     int dp[n+1][m+1];
//     memset(dp,0,sizeof(dp));
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=m;j++){
//             if(x[i-1] == y[j-1]){
//                 dp[i][j] = dp[i-1][j-1]+1;
//             }
//             else{
//                 dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
//             }
//         }
//     }
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=m;j++){
//             cout<<dp[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     string s="";
//     int i=n;
//     int j=m;
//     while(i>0 && j>0){
//         if(x[i-1] == y[j-1]){
//             s.push_back(x[i-1]);
//             i--;
//             j--;
//         }
//         else{
//             if(dp[i][j-1]>=dp[i-1][j]){
//                 j--;
//             }
//             else{
//                 i--;
//             }
//         }
//     }
//     reverse(s.begin(),s.end());
//     cout<<s<<endl;

//     return dp[n][m];
// }

// int main(){
//     string x,y;
//     cin>>x;
//     cin>>y;
//     cout<<solution_td(x,y,x.length(),y.length())<<endl;
//     return 0;
// }


                            //mininmum no of insertion and deletion for a->b



// # include<bits/stdc++.h>
// using namespace std;

// int solution(string x,string y,int n,int m){
//     if(n==0||m==0){
//         return 0;
//     }
//     int count = 0;
//     if(x[n-1]==y[m-1]){
//         count = 1+solution(x,y,n-1,m-1);
//     }
//     else{
//         count+=max(solution(x,y,n-1,m),solution(x,y,n,m-1));
//     }
//     return count;
// }

// int solution_td(string x,string y,int n,int m){
//     int dp[n+1][m+1];
//     memset(dp,0,sizeof(dp));
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=m;j++){
//             if(x[i-1] == y[j-1]){
//                 dp[i][j] = dp[i-1][j-1]+1;
//             }
//             else{
//                 dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
//             }
//         }
//     }
//     return dp[n][m];
// }

// int main(){
//     string x,y;
//     cin>>x;
//     cin>>y;
//     int lcs = solution_td(x,y,x.length(),y.length());
//     int insertion = y.length()-lcs;
//     int deletion = x.length()-lcs;
//     cout<<insertion<<" "<<deletion<<endl;
//     return 0;
// }


                                         //largest palindromic sbusequence


// # include<bits/stdc++.h>
// using namespace std;


// int solution(string x,string y,int n,int m){
//     if(n==0||m==0){
//         return 0;
//     }
//     int count = 0;
//     if(x[n-1]==y[m-1]){
//         count = 1+solution(x,y,n-1,m-1);
//     }
//     else{
//         count+=max(solution(x,y,n-1,m),solution(x,y,n,m-1));
//     }
//     return count;
// }

// int main(){
//     string x;
//     cin>>x;
//     string a;
//     a = x;
//     reverse(x.begin(),x.end());
//     cout<<solution(a,x,a.length(),x.length());
//     return 0;
// }


                    //   minimum no of deletion to make a string  palindrome

// # include<bits/stdc++.h>
// using namespace std;

// int solution(string x,string y,int n,int m){
//     if(n==0 || m==0){
//         return 0;
//     }
//     if(x[n-1] == y[m-1]){
//         return 1+solution(x,y,n-1,m-1);
//     }
//     else{
//         return max(solution(x,y,n-1,m),solution(x,y,n,m-1));
//     }
// }

// int solution_td(string x,string y,int n,int m){
//     int dp[n+1][m+1];
//     memset(dp,0,sizeof(dp));
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=m;j++){
//             if(x[i-1] == y[j-1]){
//                 dp[i][j] = 1+dp[i-1][j-1];
//             }
//             else{
//                 dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
//             }
//         }
//     }
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=m;j++){
//             cout<<dp[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return dp[n][m];
// }

// int main(){
//     string x;
//     cin>>x;
//     string y  = x;
//     reverse(x.begin(),x.end());
//     cout<<x<<endl;
//     cout<<y<<endl;
//     int len = solution_td(y,x,y.length(),x.length());
//     cout<<y.length()-len<<endl;
//     return 0;
// }

                            //  shortest common subsequence


// # include<bits/stdc++.h>
// using namespace std;

// int d_p[1000][1000];

// int solution(string x,string y,int n,int m){
//     if(n==0||m==0){
//         return 0;
//     }
//     if(x[n-1] == y[m-1]){
//         return 1+solution(x,y,n-1,m-1);        
//     }
//     else{
//         return max(solution(x,y,n-1,m),solution(x,y,n,m-1));
//     }   
// }

// int solution_mem(string x,string y,int n,int m){
//     if(n==0||m==0){
//         return 0;
//     }
//     if(d_p[n][m]>0){
//         return d_p[n][m];
//     }
//     if(x[n-1]==y[n-1]){
//         d_p[n][m] = 1+solution(x,y,n-1,m-1);
//     }
//     else{
//         d_p[n][m] = max(solution(x,y,n-1,m),solution(x,y,n,m-1)); 
//     }
//     return d_p[n][m];
// }

// int solution_td(string x,string y,int n,int m){
//     int dp[n+1][m+1];
//     memset(dp,0,sizeof(dp));
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=m;j++){
//             if(x[i-1] == y[j-1]){
//                 dp[i][j] = 1+dp[i-1][j-1];
//             }
//             else{
//                 dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
//             }
//         }
//     }
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=m;j++){
//             cout<<dp[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return dp[n][m];
// }

// int main(){
//     string x,y;
//     cin>>x;
//     cin>>y;
//     int lcs = solution_td(x,y,x.length(),y.length());
//     cout<<x.length()-lcs+y.length()<<endl;
//     return 0;
// }


                            //    printing shortest common supersequence

// # include<bits/stdc++.h>
// using namespace std;

// int solution(string x,string y,int n,int m){
//     int dp[n+1][m+1];
//     memset(dp,0,sizeof(dp));
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=m;j++){
//             if(x[i-1] == y[j-1]){
//                 dp[i][j] = 1+dp[i-1][j-1];
//             }
//             else{
//                 dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
//             }
//         }
//     }
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=m;j++){
//             cout<<dp[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     int i=n;
//     int j=m;
//     string s;
//     while(i>0 && j>0){
//         if(x[i-1] == y[j-1]){
//             s.push_back(x[i-1]);
//             i--;
//             j--;
//         }
//         else{
//             if(dp[i-1][j]> dp[i][j-1]){
//                 s.push_back(x[i-1]);
//                 i--;
//             }
//             else{
//                 s.push_back(y[j-1]);
//                 j--;
//             }
//         }
//     }
//     while(j>0){
//         s.push_back(y[j-1]);
//         j--;
//     }
//     while(i>0){
//         s.push_back(x[i-1]);
//         i--;
//     }
//     reverse(s.begin(),s.end());
//     cout<<s<<endl;
//     return dp[n][m];

// }

// int main(){
//     string x,y;
//     cin>>x;
//     cin>>y;
//     cout<<solution(x,y,x.length(),y.length())<<endl;
//     return 0;
// }


                //  longest repeateing subsequence

// # include<bits/stdc++.h>
// using namespace std;

// int solution(string x,string y,int n,int m){
//     int dp[n+1][m+1];
//     memset(dp,0,sizeof(dp));
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=m;j++){
//             if(x[i-1] == y[j-1] && i!=j){
//                 dp[i][j] = 1+dp[i-1][j-1];
//             }
//             else{
//                 dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
//             }
//         }
//     }
//     return dp[n][m];
// }

// int main(){
//     string x;
//     cin>>x;
//     cout<<solution(x,x,x.length(),x.length())<<endl;
//     return 0;
// }


                            //  pattern matching sequence 

// # include<bits/stdc++.h>
// using namespace std;

// bool solution(string x,string y,int n,int m){
//     int dp[n+1][m+1];
//     memset(dp,0,sizeof(dp));
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=m;j++){
//             if(x[i-1] == y[j-1]){
//                 dp[i][j] = 1+dp[i-1][j-1];
//             }
//             else{
//                 dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
//             }
//         }
//     }
//     if(dp[n][m] == n || dp[n][m] == m){
//         return true;
//     }
//     return false;
// }

// int main(){
//     string x,y;
//     cin>>x;
//     cin>>y;
//     cout<<solution(x,y,x.length(),y.length())<<endl;
//     return 0;
// }


                        //    minimum no of insertion to make string palindrome


// # include<bits/stdc++.h>
// using namespace std;

// int solution(string x,string y,int n,int m){
//     int dp[n+1][m+1];
//     memset(dp,0,sizeof(dp));
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=m;j++){
//             if(x[i-1] == y[j-1]){
//                 dp[i][j] = 1+dp[i-1][j-1];
//             }
//             else{
//                 dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
//             }
//         }
//     }
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=m;j++){
//             cout<<dp[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return x.length()-dp[n][m];
// }

// int main(){
//     string x;
//     cin>>x;
//     string y=x;
//     reverse(x.begin(),x.end());
//     cout<<solution(x,y,x.length(),y.length())<<endl;
//     return 0;
// }




                                                // Matrix chain multiplication


// # include<bits/stdc++.h>
// using namespace std;

// int dp[10000][10000];

// int solution(int arr[],int i,int j){
//     if(i>=j){
//         return 0;
//     }
//     int minv=INT_MAX;
//     for(int k=i;k<=j-1;k++){
//         int ans=solution(arr,i,k)+solution(arr,k+1,j) + arr[i-1]*arr[k]*arr[j];
//         minv = min(minv,ans);
//     }
//     return minv;
// }

// int solution_memo(int arr[],int i,int j){
//     if(i>=j){
//         return 0;
//     }
//     if(dp[i][j]!=-1){
//         return dp[i][j];
//     }
//     int minv=INT_MAX;
//     for(int k=i;k<j;k++){
//         int temp = solution_memo(arr,i,k)+solution_memo(arr,k+1,j)+arr[i-1]*arr[j]*arr[k];
//         minv=min(temp,minv);
//     }
//     dp[i][j] = minv;
//     return minv;
// }

// int main(){
//     memset(dp,-1,sizeof(dp));
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<solution_memo(arr,1,n-1)<<endl;
//     return 0;
// }


                                    //  palindrome pationing

// # include<bits/stdc++.h>
// using namespace std;

// bool isPalindrome(string s,int i,int j){
//     while(i<j){
//         if(s[i]!=s[j]){
//             return false;
//         }
//         i++;
//         j--;
//     }
//     return true;
// }

// int solution(string s,int i,int j){
//     if(i>=j){
//         return 0;
//     }
//     if(isPalindrome(s,i,j)){
//         return 0;
//     }
//     int ans=INT_MAX;
//     for(int k=i;k<j;k++){
//         int temp = solution(s,i,k)+solution(s,k+1,j)+1;
//         ans=min(ans,temp);
//     }
//     return ans;
// }

// int dp[1000][1000];

// int solution_memo(string s,int i,int j){
//     if(i>=j){
//         return 0;
//     }
//     if(isPalindrome(s,i,j)){
//         return 0;
//     }
//     if(dp[i][j]>0){
//         return dp[i][j];
//     }
//     int ans=INT_MAX;
//     for(int k=i;k<j;k++){
//         int temp = solution_memo(s,i,k)+solution_memo(s,k+1,j)+1;
//         ans= min(temp,ans);
//     }
//     dp[i][j] = ans;
//     return ans;
// }

// int main(){
//     memset(dp,0,sizeof(dp));
//     string s;
//     cin>>s;
//     cout<<solution_memo(s,0,s.length()-1)<<endl;
//     // cout<<isPalindrome(s,0,s.length()-1)<<endl;
//     return 0;
// }


                                    //    evaluate expression

# include<bits/stdc++.h>
using namespace std;

int solution(string s,int i,int j,char exp){
    if(i>j){
        return 0;
    }
}

int main(){
    string s;
    cin>>s;
    cout<<solution(s,0,s.length()-1,T)<<endl;
    return 0;
}