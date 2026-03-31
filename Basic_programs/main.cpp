#include <iostream>
#include<math.h>
using namespace std;
/*
int main()
{ int n,temp,count=0,rem,result=0;
  cout<<"Enter any no.=";cin>>n;
  temp=n;
  while(temp!=0){
    temp/=10;
    count++;
  }
  cout<<"Digits are="<<count;
  while(temp!=0){
    rem=temp%10;
    result+=pow(rem,count);
    n/=10;
  }
  if(n==result){
    cout<<"Number is Armstrong no. ";
  }
  else{
    cout<<"Number is not Armstrong no.";
  }
    return 0;
}
*/
/*
class A{
  int *p,a;
  public:
      void memory(){
       p=new int[20];
      }
      void read(){
       for(int i=0;i<20;i++){
        cout<<"\np["<<i<<"]=";
        cin>>p[i];
       }
      }
      void descend(){
       for(int i=0;i<20;i++){
        for(int j=i+1;j<20;j++){
            if(p[i]<p[j]){
                a=p[i];
                p[i]=p[j];
                p[j]=a;
            }
        }
       }
      }
      void disp(){
       for(int i=0;i<20;i++){
        cout<<"\np["<<i<<"]="<<p[i];
       }
       delete[] p;
      }
};
int main(){
  A a1;
  a1.memory();
  a1.read();
  a1.descend();
  a1.disp();
  return 0;
}
*/

/*
class solid{
    protected:
  float radius,height;
  public:
      void getdata(){
       cout<<"\nEnter radius:-";
       cin>>radius;
       cout<<"\nEnter height:-";
       cin>>height;
      }
      virtual void volume()=0;
};
class sphere:public solid{
    float Vs;
  public:
      void volume(){ Vs=(4*3.14*radius*radius*radius)/3;
        cout<<"\nVolume of sphere = "<<Vs;
      }
};
class cylinder:public solid{
  public:
      void volume(){
        cout<<"\nVolume of cylinder = "<<(3.14*radius*radius*height);
      }
};
class cone:public solid{
  public:
      void volume(){
        cout<<"\nVolume of cone = "<<(3.14*radius*radius*height)/3;
      }
};
int main()
{  solid *sd[3];
   sphere s;
   s.getdata();
   sd[0]=&s;
   sd[0]->volume();
   cylinder cy;
   cy.getdata();
   sd[1]=&cy;
   sd[1]->volume();
   cone c;
   c.getdata();
   sd[2]=&c;
   sd[2]->volume();
    return 0;
}

*/
/*
class shape{
 protected:
 double base,height;
 public:
     void getdata(){
      cout<<"Enter base:-";
      cin>>base;
      cout<<"\nEnter height:-";
      cin>>height;
     }
     virtual void display_area(){ }
};
class triangle:public shape{
    double area_t;
  public:
      void display_area(){
        area_t=0.5*base*height;
        cout<<"\nArea of Triangle = "<<area_t<<endl;
      }
};
class rectangle:public shape{
    double area_r;
public:
    void display_area(){
      area_r=base*height;
      cout<<"\nArea of Rectangle = "<<area_r;
    }
};
int main(){
 shape s,*sp[2];
 triangle t;
 rectangle r;
 t.getdata();
 sp[0]=&t;
 sp[0]->display_area();
 r.getdata();
 sp[1]=&r;
 sp[1]->display_area();
 return 0;
}

*/

/*
#include<string.h>
class String{
 char s[10],p[10];
 public:
     void read(){
     cout<<"Enter 1st string:-";
     cin.getline(s,10);
     cout<<"\nEnter 2nd string:-";
     cin.getline(p,10);
     }
     int operator==(const String &s1){
       if(strcmp(s1.s,s1.p)==0){
          cout<<"String are equal...";
       }
       else{
          cout<<"String are not equal...";
       }
     }
};
int main()
{  String S;
   S.read();
   cout<<(S.s==S.p);
   return 0;
}

*/

/*
//Adding two private data member using friend function
class A{
  int a,b,c;
  public:
      void read(){
        cout<<"Enter a&b:-";
        cin>>a>>b;
      }
      friend void add(A);
};
void add(A a1){
    a1.c = a1.a + a1.b;
    cout<<"Sum:-"<<a1.c;
}
int main(){
    A r;
    r.read();
    add(r);
    return 0;
}
*/

/*
//DMA to perform 2x2 matrix addition and subtraction
int main(){
    int *p,*q,*r;
    p=new int[2*2];
    q=new int[2*2];
    cout<<"Enter 1st array elements:-\n";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
              cin>>*(p+i*2+j);
        }
    }
    cout<<"Enter 2nd array elements:-\n";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
              cin>>*(q+i*2+j);
        }
    }
    cout<<"Sum of array:-\n";
    r=new int[2*2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
              *(r+i*2+j) = *(p+i*2+j) + *(q+i*2+j);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
              cout<<*(r+i*2+j)<<"\t";
        }
        cout<<"\n";
    }
    cout<<"Subtration of array:-\n";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
              *(r+i*2+j) = *(p+i*2+j) - *(q+i*2+j);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
              cout<<*(r+i*2+j)<<"\t";
        }
        cout<<"\n";
    }
    delete[] p;
    delete[] q;
    delete[] r;
    return 0;
}
*/

/*
//Stack using virtual function
class A{
protected:
    int ele,top,n,*Stack,mx;
public:
    virtual void push()=0;
    virtual void pop()=0;
    virtual void display()=0;
};
class B: public A
{
public:
    B(){
        top=-1;
        cout<<"Enter Stack size=";cin>>mx;
        Stack=new int[mx];
    }
    void push(){
        if(top==mx-1){
            cout<<"Stack is full..."<<"\n";
        }
        else{
            cout<<"Enter element to insert:-";
            cin>>ele;
            top=top+1;
            Stack[top]=ele;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"Stack is empty...";
        }
        else{
            n=Stack[top];
            cout<<"Element "<<n<<" is deleted.."<<endl;
            --top;
        }
    }
    void display(){
        if(top==-1){
            cout<<"Stack is empty..."<<endl;
        }
        else{
            cout<<"Stack Elements:-\n";
            for(int i=0;i<=top;i++){
            cout<<Stack[i]<<" ";
            }
        }
    }
};
int main(){
    int ch;
    A *a;
    B b;
    a=&b;
    D:do{
        cout<<"\n1.Push element in Stack\n2.Pop element from Stack\n3.Display Stack element\n";
        cout<<"\nEnter Choice:-";
        cin>>ch;
        switch(ch){
            case 1:for(int i=0;i<=4;i++){
                        a->push();
                   }
                   break;
            case 2:for(int i=0;i<5;i++){
                        a->pop();
                   }
                   break;
            case 3:a->display();break;
            default:cout<<"Invalid Choice!!!";
        }
        if(ch>3){exit(0);}
        else{goto D;}
    }while(ch!=3);
    return 0;
}
*/

/*
// Casting operator
int main(){
    float m;
    int n;
    cout<<"Enter value:-";cin>>m;
    n=static_cast<int>(m);
    cout<<n;
    return 0;
}
*/
/*
//#include<iostream>
#include<queue>
#include<string>
using namespace std;
struct node{
   int freq;
   char data;
   const node *child0, *child1;
   node(char d, int f = -1){ //assign values in the node
      data = d;
      freq = f;
      child0 = NULL;
      child1 = NULL;
   }
   node(const node *c0, const node *c1){
      data = 0;
      freq = c0->freq + c1->freq;
      child0=c0;
      child1=c1;
   }
   bool operator<( const node &a ) const { //< operator performs to find priority in queue
      return freq >a.freq;
   }
   void traverse(string code = "")const{
      if(child0!=NULL){
         child0->traverse(code+'0'); //add 0 with the code as left child
         child1->traverse(code+'1'); //add 1 with the code as right child
      }else{
         cout << "Data: " << data<< ", Frequency: "<<freq << ", Code: " << code<<endl;
      }
   }
};
void huffmanCoding(string str){
   priority_queue<node> qu;
   int frequency[256];
   for(int i = 0; i<256; i++)
      frequency[i] = 0; //clear all frequency
   for(int i = 0; i<str.size(); i++){
      frequency[int(str[i])]++; //increase frequency
   }
   for(int i = 0; i<256; i++){
      if(frequency[i]){
         qu.push(node(i, frequency[i]));
      }
   }
   while(qu.size() >1){
      node *c0 = new node(qu.top()); //get left child and remove from queue
      qu.pop();
      node *c1 = new node(qu.top()); //get right child and remove from queue
      qu.pop();
      qu.push(node(c0, c1)); //add freq of two child and add again in the queue
   }
   cout << "The Huffman Code: "<<endl;
   qu.top().traverse(); //traverse the tree to get code
}
main(){
   string str = "ACCEBFFFFAAXXBLKE"; //arbitray string to get frequency
   huffmanCoding(str);
}
*/
/*
//Breadth First search
#include<list>
class Graph{
    int v;
    list<int> *adjlist;
public:
    Graph(int v){
        this->v= v;
        adjlist = new list<int>[v];
    }
    void add(int V,int w){
        adjlist[V].push_back(w);
    }
    void bfsgraph(int s);
};
void Graph::bfsgraph(int s){
    bool *visited = new bool[v];
    for(int i=0;i<v;i++)
        visited[i] = false;
    list<int> q;
    list<int>::iterator i;
    visited[s] = true;
    q.push_back(s);
    while(!q.empty()){
        s = q.front();
        cout<<s<<" ";
        q.pop_front();
        //Checking for adjacent Vertices
        for(i=adjlist[s].begin();i!=adjlist[s].end();++i){
            if(!visited[*i]){
                visited[*i] = true;
                q.push_back(*i);
            }
        }
    }
}
int main(){
    Graph g(4);
    g.add(0,1);
    g.add(0,2);
    g.add(1,2);
    g.add(2,0);
    g.add(2,3);
    g.add(3,3);
    cout<<"After Breadth First Search : \n";
    g.bfsgraph(2);
    return 0;
}
*/
/*
//Depth First Search
#include<list>
class Graph{
    int v;
    list<int> *a;
    void dfsutil(int source,bool visited[]);
public:
    Graph(int v){
        this->v = v;
        a = new list<int>[v];
    }
    void add(int source, int destination){
        a[source].push_back(destination);
    }
    void dfs(int source);
};
void Graph::dfs(int source){
    bool *visited = new bool[v];
    for(int i=0;i<v;i++)
        visited[i] = false;
    dfsutil(source,visited);
}
void Graph::dfsutil(int source,bool visited[]){
    visited[source] = true;
    cout<<source<<" ";
    list<int>::iterator i;
    for(i=a[source].begin();i!=a[source].end();i++){
        if(!visited[*i]){
            visited[*i] = true;
            dfsutil(*i,visited);
        }
    }
}
int main(){
    int v,e,source,des;
    cout<<"Enter no. of Vertex and Edges : ";
    cin>>v>>e;
    Graph g(v);
    cout<<"\nEnter source-destination pair : \n";
    for(int i=0;i<v;i++){
        cin>>source>>des;
        g.add(source,des);
    }
    cout<<"\nAfter Depth First Search : ";
    g.dfs(2);
    return 0;
}
*/
/*
//Dijkstra Algorithm
#include<limits.h>
#include<stdio.h>
#define V 9
void dijkstra(int [V][V],int);
int minimumDist(int [] ,bool []);
void print(int []);
int main(){
    int graph[V][V]= { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };
    dijkstra(graph,0);
    return 0;
}
void dijkstra(int graph[V][V],int source){
    int dist[V];
    bool spt[V];
    for(int i=0;i<V;i++)
        dist[i] = INT_MAX, spt[i] = false;
    dist[source] = 0;
    for(int c=0;c<V-1;c++){
        int u = minimumDist(dist,spt);
        spt[u] = true;
        for(int v=0;v<V;v++)    //Updating Values for adjacent Vertices
            if(!spt[v]&&graph[u][v]&&dist[u]!=INT_MAX && dist[u]+graph[u][v]<dist[v])
                dist[v] = dist[u] + graph[u][v];
    }
    print(dist);
}
int minimumDist(int dist[],bool spt[]){
    int mini = INT_MAX, min_index;
    for(int u=0;u<V;u++)
        if(dist[u]<=mini && spt[u]==false)
            mini = dist[u], min_index = u;
    return min_index;
}
void print(int dist[]){
    printf("Vertex \t\t Distance from Source\n");
    for(int i=0;i<V;i++)
        printf("%d \t\t %d\n",i,dist[i]);
}
*/
/*
//Graph Implementation
#include<list>
class Graph{
    int v;
    list<int> *a;
public:
    Graph(int v){
        this->v=v;
        a = new list<int>[v];
    }
    void add(int source,int destination){
        a[source].push_back(destination);
        a[destination].push_back(source);
    }
    void print(int v){
        list<int>::iterator it;
        for(int i=0;i<v;i++){
            printf("%d -> ",i);
            for(it=a[i].begin();it!=a[i].end();it++){
                printf("%d",*it);
            }
            printf("\n");
        }
    }
};
int main(){
    int v,e,source,destination;
    printf("Enter Vertex and Edges :");
    scanf("%d %d",&v,&e);
    Graph g(v);
    printf("\nEnter Vertex and Edge pairs : \n");
    for(int i=0;i<v;i++){
        scanf("%d %d",&source,&destination);
        g.add(source,destination);
    }
    g.print(v);
    return 0;
}
*/
/*
//pointer
int main(){
    int *p=NULL;
    cout<<&p;
    return 0;
}
*/
/*
//Code for password
#include<conio.h>
int main(){
    char t;
    cout<<"Enter password : ";
    while((t=getch())!=13)
        cout<<"*";
    cout<<"\nYour Password is saved!!!";
    return 0;
}
*/
/*
#include<string>
int main(){
    string s = "";
    int a = stoi(s);
    cout<<a;
    return 0;
}
*/
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int c;
	    scanf("%d",&c);
	    set<int> s;
	    int n = (c%2 == 0) ? (c^2)<<1 : (c^2)+1;
	    for(int i=0;i<n;++i){
	        int ans = (i ^ c) * i;
	        s.insert(ans);
	    }
	    int max = *s.rbegin();
	    printf("%d\n",max);
	}
	return 0;
}
*/
/*
//Rainwater Trapping Problem
//O(n) auxilliary space is used
#include<algorithm>
int rainWater(int a[],int n){
    int left[n],right[n];
    left[0] = a[0];
    for(int i=1;i<n;i++){
        left[i] = max(left[i-1],a[i]);
    }
    right[n-1] = a[n-1];
    for(int i=n-2;i>=0;i--){
        right[i] = max(right[i+1],a[i]);
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        ans += (min(left[i],right[i]) - a[i]); //Formula to calculate total water stored
    }
    return ans;
}
int main(){
    int a[] = {3,1,2,4,0,1,3,2};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<"Total Amount of Water present : "<<rainWater(a,n)<<" blocks";
    return 0;
}
*/
/*
//Duplicate Number in Array
int main(){
    int a[] = {2,1,3,5,5,4};
    int t = a[0],h = a[0];
    while(true){
        t = a[t];
        h = a[a[h]];
        if(t == h)  break;
    }
    cout<<"Duplicate No. is : "<<t;
    return 0;
}
*/
/*
//Check whether Given Number is power of Two
int main(){
    int n = 64;
    (n && (!(n&(n-1)))) ? cout<<"Yes" : cout<<"No";
    return 0;
}
*/
/*
//Jolly Jumper
#include<cstdlib>
#include<vector>
bool isJollyjumper(int a[],int n){
    vector<bool> v(n,false);
    for(int i=0;i<n-1;i++){
        int ans = abs(a[i]-a[i+1]);
        if(ans==0 || ans>n-1 || v[ans]==true)
            return false;
        v[ans] = true;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    isJollyjumper(a,n) ? cout<<"Yes" : cout<<"No";
    return 0;
}
*/
/*
//Newspaper (Incorrect)
#include<unordered_map>
int main(){
    int n,k;
    scanf("%d",&n);
    while(n--){
        char c;
        int v;
        string s,para;
        scanf("%d",&k);
        unordered_map<char,int> um;
        unordered_map<char,int>::const_iterator it;
        for(int i=0;i<k;i++){
            scanf("%c %d",&c,&v);
            um.insert(make_pair(c,v));
        }
        int m;
        scanf("%d",&m);
        do{
            getline(cin,s);
            para += s + "\n";
        }while(s.length()>0 && --m);
        int sum = 0;
        it = um.begin();
        for(unsigned int c = 0;c<para.length();c++){
            if(para[c]==it->first)
                sum += it->second;
            if(para[c]=='\0')
                it++;
        }
        cout<<sum;
    }

    return 0;
}
*/
//Input of Paragraph For required no. of Lines
/*
int main(){
    string s,p;
    int m = 2;
    do{
        getline(cin,s);
        p += s + "\n";
    }while(s.length()>0 && --m);
    cout<<"\n\n"<<p;
    return 0;
}
*/

/*
int main(){
    string s = "11001";
    int o = 0,z = 0;
    for(int i = 0;s[i]!='\0';i++){
        if(s[i]=='1')
            o++;
        else
            z++;
    }
    cout<<o<<"  "<<z;
    return 0;
}
*/
//Fibbonacci Series
/*
int main(){
    int n,a=0,b=1,c;
    cout<<"Enter no. of element : ";
    cin>>n;
    cout<<a<<" "<<b;
    for(int i=2;i<n;++i){
        c = a+b;
        cout<<" "<<c;
        a = b;
        b = c;
    }
    return 0;
}
*/
/*
//Prime Number
int main(){
    int n;
    bool flag = true;
    cout<<"Enter a Number : ";
    cin>>n;
    for(int i = 2;i*i<=n;i++){
        if(n%i==0){
            flag = false;
            break;
        }
    }
    if(n<=1)
        flag = false;
    cout<<n<<(flag ? " is prime":" is not prime");
    return 0;
}
*/
/*
//Armstrong Number
int main(){
    int n,temp,r,sum=0;
    cout<<"Enter Number : ";
    cin>>n;
    temp = n;
    while(n>0){
        r = n%10;
        sum = sum+(r*r*r);
        n = n/10;
    }
    cout<<temp<<(temp==sum ? " is Armstrong Number":" is not Armstrong Number");
    return 0;
}
*/
/*
//Reverse of Number
int main(){
    int n,r,sum=0;
    cout<<"Enter a Number : ";
    cin>>n;
    while(n>0){
        r = n%10;
        sum = (10*sum)+r;
        n/=10;
    }
    cout<<"\nReverse of Number : "<<sum;
    return 0;
}
*/
/*
#include<limits.h>
#include<stdlib.h>
int main(){
    long long n;
    cin>>n;
    long long min = LONG_LONG_MAX,curr=0,diff,ans;
    for(long long i=n;i>=0;i-=2){
        diff = abs(i-curr);
        if(diff < min){
            min = diff;
            ans = curr+i;
        }
        curr++;
    }
    cout<<ans;
    return 0;
}
*/
/*
#include<algorithm>
#include<vector>
int main(){
    vector<int> v{2,80,4,32};
    int n = v.size();
    int countp = n-1;
    for(int i=0;i<n;i++){
        for(int j=i+2;j<n;j++){
            int m = min(v[i],v[j]);
            int k = (j-i-1)+i;
            if(v[k] < m)
                countp++;
        }
    }
    cout<<countp;
    return 0;
}
*/
/*
int gcd(int a,int b){
    return (a % b == 0) ? b : gcd(b,a%b);
}
int main(){
    int a,b,ans;
    a = 27;
    b = 15;
    ans = gcd(a,b);
    cout<<ans;
    return 0;
}
*/
/*
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        cout<<(a==7||b==7||c==7 ? "YES\n" : "NO\n");
    }
	return 0;
}
*/
/*
#include<set>
int gcd(int a,int b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int lcm(int i,int j){
    return (i*j)/gcd(i,j);
}
int main(){
    int x = 4,y = 12,ans;
    //string string="ABC";
    set<int> s;
    for(int i=x;i<y;i++){
        for(int j=i+1;j<=y;j++){
            ans = lcm(i,j);
            s.insert(ans);
        }
    }
    int mx = *(s.rbegin());
    int mi = *(s.begin());
    cout<<mi<<" "<<mx;
    return 0;
}
*/
/*
int main(){
    string string;//,pattern;
    string pattern;
    getline(cin,string);
    cout<<string;
    return 0;
}
*/
/*
int main(){
    int sum=0,sumarr=0;
    int a[] = {1,2,3,4,5,6,7,8,10};
    for(int i=0;i<9;i++){
        sum += (i+1);
        sumarr += a[i];
    }
    cout<<sumarr<<" "<<sum;
    return 0;
}
*/
/*
#include<utility>
#include<vector>
int main(){
    int a[3] = {1,2,3};
    pair<vector<int>,int> p = {{a,a+3},2};
    cout<<p.first[2]<<" "<<p.second;
}
*/
/*
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int p,t,c=0,s=0;
        cin>>p;
        t = p;
        bool res = p && (!(p&(p-1)));
        while(t != 1 && res){
            t >>= 1;
            c++;
        }
        for(int i=1;i<=p;i<<=1)
            s++;
        cout<<(res && c<=11 ? 1 : res && c>11 ? p/2048 : s)<<"\n";
    }
	return 0;
}
*/
/*#include<bits/stdc++.h>
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(null);
    int t;
    cin>>t;
    for(int tc=1;tc<=t;++tc){
        cout<<"Case #"<<tc<<": ";
        int r,c;
        cin>>r>>c;

    }
}*/
/*
int main(){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<".";
        }
        cout<<"\n";
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(i%2==0){
                if(j%2==0){
                    cout<<"+";
                }else{
                    cout<<"-";
                }
            }else{
                if(j%2==0){
                    cout<<"|";
                }else{
                    cout<<".";
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}
*/
/*
//Weird Algorithm
#include <bits/stdc++.h>
int main(){
    int n;
    cin >> n;
    vector<int> v;
    v.push_back(n);
    while(n != 1){
        n = n%2==0 ? n/2 : n*3+1;
        v.push_back(n);
    }
    for(auto i : v)
        cout<<i<<" ";
    return 0;
}
*/
int main(int argc, char const *argv[])
{
    int arr[] = {1,2,3,4};
    
    cout<<arr[-1];

    return 0;
}


