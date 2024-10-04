// // #include<iostream>

// // using namespace std;

// // char s[100010];
// // char p[10010];
// // int ne[10010];
// // int main(){
// //     int n ,m;
// //     cin >> m>>(p+1)>>n>>(s+1);
// //     for(int i = 2,j=0;i<=n;i++){
// //         while(j&&p[i]!=p[j+1])j = ne[j];
// //         if(p[i]==p[j+1])j++;
// //         ne[i] = j;
// //     }
    
// //     for(int i = 1,j=0;i<=n;i++){
// //         while(j&&s[i]!=p[j+1])j = ne[j];
// //         if(s[i]==p[j+1])j++;
// //         if(j==m){
// //             cout << i-m<<" ";
// //             j=ne[j];
// //         }
// //     }
    
    
// //     return 0;
// // }
// #include <iostream>

// using namespace std;

// const int N = 1000010;
// char p[N], s[N]; // 用 p 来匹配 s
// // “next” 数组，若第 i 位存储值为 k
// // 说明 p[0...i] 内最长相等前后缀的前缀的最后一位下标为 k
// // 即 p[0...k] == p[i-k...i]
// int ne[N]; 
// int n, m; // n 是模板串长度 m 是模式串长度

// int main()
// {
//     cin >> n >> p >> m >> s;

//     // p[0...0] 的区间内一定没有相等前后缀
//     ne[0] = -1;

//     // 构造模板串的 next 数组
//     for (int i = 1, j = -1; i < n; i ++)
//     {
//         while (j != -1 && p[i] != p[j + 1])
//         {
//             // 若前后缀匹配不成功
//             // 反复令 j 回退，直至到 -1 或是 s[i] == s[j + 1]
//             j = ne[j];
//         }
//         if (p[i] == p[j + 1]) 
//         {
//             j ++; // 匹配成功时，最长相等前后缀变长，最长相等前后缀前缀的最后一位变大
//         }
//         ne[i] = j; // 令 ne[i] = j，以方便计算 next[i + 1]
//     }

//     // kmp start !
//     for (int i = 0, j = -1; i < m; i ++)
//     {
//        while (j != -1 && s[i] != p[j + 1])
//        {
//            j = ne[j];
//        }
//        if (s[i] == p[j + 1])
//        {
//            j ++; // 匹配成功时，模板串指向下一位
//        }
//        if (j == n - 1) // 模板串匹配完成，第一个匹配字符下标为 0，故到 n - 1
//        {
//            // 匹配成功时，文本串结束位置减去模式串长度即为起始位置
//            cout << i - j << ' ';

//            // 模板串在模式串中出现的位置可能是重叠的
//            // 需要让 j 回退到一定位置，再让 i 加 1 继续进行比较
//            // 回退到 ne[j] 可以保证 j 最大，即已经成功匹配的部分最长
//            j = ne[j]; 
//        }
//     }

//    return 0;
// }
// #include <iostream>
// #include <cstring>

// using namespace std;

// const int MAXN = 1000010;
// const int MAXM = 100010;

// char s[MAXN];
// char p[MAXM];
// int ne[MAXM];

// int main() {
//     int n, m;
//     cin >> m;
//     cin >> (p + 1);  // 从p[1]开始读取模式串
//     cin >> n;
//     cin >> (s + 1);  // 从s[1]开始读取文本串

//     // 计算next数组
//     ne[1] = 0;
//     for (int i = 2, j = 0; i <= m; i++) {
//         while (j > 0 && p[i] != p[j + 1]) j = ne[j];
//         if (p[i] == p[j + 1]) j++;
//         ne[i] = j;
//     }

//     // KMP匹配过程
//     for (int i = 1, j = 0; i <= n; i++) {
//         while (j > 0 && s[i] != p[j + 1]) j = ne[j];
//         if (s[i] == p[j + 1]) j++;
//         if (j == m) {
//             cout << i - m + 1 << " ";
//             j = ne[j];
//         }
//     }

//     return 0;
// }
// #include<iostream>
// #include<set>
// #include<map>
// #include<unordered_map>
// using namespace std;

// int main(){
//     set<int>s;
//     map<int,int>m;
//     unordered_map<int,int>um;
//     m.insert(make_pair(1,2));
//     um.insert(make_pair(1,2));
//     return 0;
// }

// #include<iostream>
// #include<cmath>
// #include<bitset>
// using namespace std;

// int main(){
//     for(int i = 0;i<256;i++){
//         bitset<8>b(i);
//         cout<<i<<"::"<<b<<endl;
//         if((i==32||i==47||i==63||i==79||i==83)){
//             cout << "-------------------------------"<<endl;
//         }
//     }
    
//     return 0;
// }


// #include<iostream>

// using namespace std;
// struct adn{
//     int pre;
//     int data;
//     int next;
// };


// int main(){
//     int fadd,n,end;
//     cin >> fadd >> n;
//     adn s[100010];
//     for(int i = 0;i<n;i++){
//         int m,data,next;
//         cin>>m >> data>>next;
//         s[m].data = data;
//         s[m].next = next;
//         if(next != -1)
//             s[next].pre = m;
//         else end = m;
//     }
//     int u = 1;
//     int num = 0;

//     while(1){
//         num++;
//         if(u==1){
//             if(num!=n)
//                 printf("%05d %d %05d\n",end,s[end].data,fadd);
//             else
//                 printf("%05d %d -1\n",end,s[end].data);

//             end = s[end].pre;
//             u--;
//         }
//         else{
//             if(num!=n)
//                 printf("%05d %d %05d\n",fadd,s[fadd].data,end);
//             else
//                 printf("%05d %d -1\n",fadd,s[fadd].data);

//             fadd = s[fadd].next;
//             u++;
//         }
//         if(num==n)break;
//     }
//     return 0;
// }


// #include<iostream>
// #include<list>
// #include<cstring>
// #include<cmath>

// using namespace std;
//     struct adn{
//     int pre;
//     int data;
//     int next;
// };


//     int visit[100010];
// int main(){
//     int fadd,n;
//     cin >> fadd >> n;
//     int num1=0;
//     int num2=0;

    
//     list<adn>p1,p2;
//     int a[100010];
//     int b[100010];
    
//     memset(a,-1,sizeof(visit));
//     memset(b,-1,sizeof(visit));

//     adn s[100010];
//     for(int i = 0;i<n;i++){
//         int m,data,next;
//         cin>>m >> data>>next;
//         s[m].data = data;
//         s[m].next = next;
//         if(next != -1)
//             s[next].pre = m;
//         else s[i].next = -1;
//     }

//     int o = 0;
//     int k = 0;
//     for(int i =fadd;i!=-1;i = s[i].next){
//         int c = fabs(s[i].data);
//         if(visit[c]==0){
//             p1.push_back(s[i]);
//             visit[c] = 1;
//             a[o++] = i;
//         }
//         else{
//             p2.push_back(s[i]);
//             b[k++] = i;
//         }
//     }
//     o = 0;
//     k = 0;
    
//     for(auto p : p1){
//         if(a[o+1]==-1)
//               printf("%05d %d -1\n",a[o],p.data);
//         else
//             printf("%05d %d %05d\n",a[o],p.data,a[o+1]);
//         o++;


//     }
//     for(auto p : p2){
//         if(b[k+1]==-1)
//             printf("%05d %d -1\n",b[k],p.data);
//         else
//             printf("%05d %d %05d\n",b[k],p.data,b[k+1]);
//         k++;

//     }
        


//     return 0;
// }




// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;
// bool customCompare(pair<int,int> a, pair<int,int> b) {
//     return a.second>b.second;
// }

// int main(){
//     vector<pair<int,int>>p1;
//     vector<pair<int,int>>p2;
//     vector<pair<int,int>>p3;
//     vector<pair<int,int>>p4;
    
//     int n,m;
//     cin >> n;
//     int a,b;
//     for(int i= 0;i<n;i++){
//         cin >> a>>b;
//         if(a>1000||b>1000)
//             continue;
//         p1.push_back(make_pair(a,b));
//     }
//     cin >> m;
//     for(int i = 0;i<m;i++){
//         cin >> a>>b;
//         if(a>1000||b>1000)
//             continue;
//         p2.push_back(make_pair(a,b));
//     }


//     for(auto p:p2){
//         int w = p.first;
//         int m = p.second;
//         for(auto q:p1){
//             int x = q.first;
//             int y = q.second;
//             if(x*w!=0)
//                 p3.push_back(make_pair(x*w,y+m));
//         }
//     }

//     for(auto o = p3.begin();o!=p3.end();){
//         for(auto p = o+1;p!=p3.end();){
//             if(p->second==o->second){
//                 o->first+=p->first;
//                 p = p3.erase(p);
//             }
//             else{
//                 p++;
//             }
//         }
//         if(o->first==0){
//             o = p3.erase(o);
//         }else o++;
//     }
//     sort(p3.begin(),p3.end(),customCompare);
//     for(auto p:p3){
//         if(p==p3.back()){
//             cout << p.first << " " << p.second;
//             break;
//         }
//         cout << p.first << " " << p.second<<" ";

//     } if(p3.empty()){
//         cout << "0 0";
//     }
//     cout<<"\n";
// //----------------------加法

//     for(auto q:p2){
//         int x = q.first;
//         int y = q.second;
//         if(x!=0)
//             p4.push_back(make_pair(x,y));
//     }

//      for(auto q:p1){
//         int x = q.first;
//         int y = q.second;
//         if(x!=0)
//             p4.push_back(make_pair(x,y));
//     }

    
//     for (auto o = p4.begin(); o != p4.end(); ) {
//         auto p = o + 1;
//         while (p != p4.end()) {
//             if (p->second == o->second) {
//                 o->first += p->first; // 合并操作
//                 p = p4.erase(p); // 删除p并返回下一个有效元素
//             } else {
//                 ++p; // 只有在没有删除p时，增加p
//             }
//         }
//         if(o->first==0){
//             o = p4.erase(o);
//         }else{
//             o++;
//         }
// }
// sort(p4.begin(), p4.end(), customCompare);
// if (p4.empty()) {
//     cout << "0 0\n";
//     return 0;
// }

//     for(auto p:p4){
//         if(p==p4.back()){
//             cout << p.first << " " << p.second;
//             break;
//         }
//         cout << p.first << " " << p.second<<" ";
//     }

//     return 0;
// }



// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int>ps;
//     int n,p;
//     cin >> n>>p;
//     for(int i =1 ;i<=n;i++){
//         ps.push_back(i);
//     }

//     int count = 0;
//     int index = 0;
//     while(ps.size()>0){

//         count ++;

//         if(count == p){
//             cout << ps[index] << " ";
//             ps.erase(ps.begin()+index);
//             count = 0;
//         }

//         else index = (index+1)%ps.size();
//     }
   


//     return 0;
// }


#include<iostream>

using namespace std;
int main()
{
    for(int i=100;i<=999;i++){
        int x,y,z;
        x = i/100;
        y = (i-x*100)/10;
        z = i-x*100-y*10;
        if(x*x*x+y*y*y+z*z*z==i){
            cout<<i<<":yes"<<"\n";
        }
        else{
            cout<<i<<":no"<<"\n";
        }
    }
    

    return 0;
}