#include <iostream>

using namespace std;

/*
//Program for sum using STL(iterator)
#include<iterator>
int main(){
    cout<<"Enter two numbers : ";
    istream_iterator<int> input(cin);
    int n1 = *input;
    ++input;
    int n2 = *input;
    ostream_iterator<int> output(cout);
    cout<<"The sum is : ";
    *output = n1+n2;
    cout<<endl;
    return 0;
}
*/
/*
//STL (Vector)
#include<vector>
template<typename T> void printVector(const vector<T>&integers2);
int main(){
    const int size = 6;//defining size of array
    int array[size] = {1,2,3,4,5,6};//elements of array
    vector<int> integer;
    cout<<"The initial size of integer is : "<<integer.size()<<"\nThe initial capacity of integer is : "<<integer.capacity();
    //function push_back in sequence container
    integer.push_back(2);
    integer.push_back(3);
    integer.push_back(4);
    cout<<"\nThe size of integer is : "<<integer.size()<<"\nThe capacity of integer is : "<<integer.capacity();
    cout<<"\n\nThe output array using pointer notation : ";
    for(int *ptr = array ; ptr!=array+size ; ++ptr)
        cout<<*ptr<<' ';
    cout<<"\nOutput vector using iterator notation : ";
    printVector(integer);
    cout<<"\nReversed contents of vector integers : ";
    //two const reverse iterator
    vector<int>::const_reverse_iterator reverseIterator;
    vector<int>::const_reverse_iterator tempIterator = integer.rend();
    //displaying elements of vector using reverse iterator
    for(reverseIterator=integer.rbegin();reverseIterator!=tempIterator;++reverseIterator)
        cout<<*reverseIterator<<' ';
    cout<<endl;
    return 0;
}
template<typename T> void printVector(const vector<T>&integers2){
    //displaying elements using const_itarator
    typename vector<T>::const_iterator constIterator;
    for(constIterator=integers2.begin();constIterator!=integers2.end();++constIterator)
        cout<<*constIterator<<' ';
}
*/
/*
//Vector Element Manipulation Function
#include<vector>//vector template
#include<algorithm>//copy algorithm
#include<stdexcept>//out of range exception
#include<iterator>//ostream iterator
int main(){
    const int SIZE = 6;
    int array[SIZE] = {1,2,3,4,5,6};
    vector<int> integer(array,array+SIZE);
    ostream_iterator<int> output(cout," ");
    cout<<"Vector Integer Contains : ";
    copy(integer.begin(),integer.end(),output);
    cout<<"\nFirst element of Vector : "<<integer.front()<<"\nLast element of Vector : "<<integer.back();
    integer[0] = 7; //Set first element to 7
    integer.at(2) = 10; //Set element at position 2
    integer.insert(integer.begin()+1,22); //Insert element as 2nd element
    cout<<"\nVector after Changes : ";
    copy(integer.begin(),integer.end(),output);
    //Access out of range
    try{
        integer.at(100)=77;
    }
    catch(out_of_range &outOfRange){
        cout<<"\n\nException : "<<outOfRange.what();
    }
    integer.erase(integer.begin()); //Erase first element
    cout<<"\nVector Integer after erasing first element : ";
    copy(integer.begin(),integer.end(),output);
    integer.erase(integer.begin(),integer.end()); //Erase remaining element
    cout<<"\nAfter erasing add the elements vector "<<(integer.empty()?"is":"is not")<<" empty";
    integer.insert(integer.begin(),array,array+SIZE); //Insert elements from array
    cout<<"\n\nContent of Integer before clear : ";
    copy(integer.begin(),integer.end(),output);
    integer.clear();//Empty Integer : clear call
    cout<<"\n\nAfter clear vector "<<(integer.empty()?"is":"is not")<<" empty"<<endl;
    return 0;
}
*/
/*
//List container (STL)
#include<list>
#include<algorithm>
#include<iterator>
template<typename T> void printList(const list<T> &listRef);
int main(){
    const int SIZE = 4;
    int array[SIZE] = {2,6,4,8};
    list<int> value;//create list for int
    list<int> otherValue;//create list for int
    value.push_front(1);
    value.push_front(2);
    value.push_back(4);
    value.push_back(3);
    cout<<"Values in List : ";
    printList(value);
    value.sort();
    cout<<"\nValues after sorting : ";
    printList(value);
    otherValue.insert(otherValue.begin(),array,array+SIZE);//insert elements of array in othervalue
    cout<<"\nAfter insert otherValue contains : ";
    printList(otherValue);
    value.splice(value.end(),otherValue);
    cout<<"\nAfter splice, value contains : ";
    printList(value);
    value.sort();
    cout<<"\nAfter sort value contains : ";
    printList(value);
    otherValue.insert(otherValue.begin(),array,array+SIZE);//insert elements in othervalue
    otherValue.sort();
    cout<<"\nAfter insert and sort othervalue contains : ";
    printList(otherValue);
    value.merge(otherValue);//remove othervalue elements and insert into value
    cout<<"\nAfter merge :\n    value contains : ";
    printList(value);
    cout<<"\n   othervalue contains : ";
    printList(otherValue);
    value.pop_front();//remove element from front
    value.pop_back();//remove element from back
    cout<<"\nAfter pop_front and pop_back :\n   value contains : ";
    printList(value);
    value.unique();//remove duplicate element
    cout<<"\nAfter unique value contains : ";
    printList(value);
    value.swap(otherValue);//Swaping value from othervalue
    cout<<"\nAfter swaping :\n  Value contain : ";
    printList(value);
    cout<<"\n   othervalue contain : ";
    printList(otherValue);
    value.assign(otherValue.begin(),otherValue.end());//replace contents of values with elements of othervalue
    cout<<"\nAfter assign value contains : ";
    printList(value);
    value.merge(otherValue);//remove othervalue elements and insert into value in sorted order
    cout<<"\nAfter merge value contain : ";
    printList(value);
    value.remove(4);//remove all 4's
    cout<<"\nAfter remove value contain : ";
    printList(value);
    cout<<endl;
    return 0;
}
template<typename T> void printList(const list<T> &listRef){
    if(listRef.empty()){
        cout<<"List is Empty";
    }
    else{
        ostream_iterator<T> output(cout," ");
        copy(listRef.begin(),listRef.end(),output);
    }
}
*/
/*
//Deque Container (STL)
#include<deque>
#include<algorithm>//copy algorithm
#include<iterator>//ostream_iterator
int main(){
    deque<double> value;
    ostream_iterator<double> output(cout," ");
    value.push_front(2.2);
    value.push_front(3.5);
    value.push_back(1.1);
    cout<<"Value contains : ";
    //use subscript operator to obtain elements of value
    for(unsigned int i=0;i<value.size();++i)
        cout<<value[i]<<' ';
    value.pop_front();//remove first element
    cout<<"\nAfter pop_front, value contains : ";
    copy(value.begin(),value.end(),output);
    //use subscript operator to modify element of value
    value[1] = 5.4;
    cout<<"\nAfter modify, value contains : ";
    copy(value.begin(),value.end(),output);
    cout<<endl;
    return 0;
}
*/
/*
//Multiset Associate Container
#include<set>//multiset template definition
#include<algorithm>//copy algorithm
#include<iterator>//ostream_iterator
typedef multiset<int,less<int>> Ims;
int main(){
    const int SIZE = 10;
    int a[SIZE] = {7,22,9,1,18,30,100,22,85,13};
    Ims intMultisest;// Ims is the typedef for integer multiset
    ostream_iterator<int> output(cout," ");
    cout<<"There are currently "<<intMultisest.count(15)<<" values of 15 in the multiset\n";
    intMultisest.insert(15);
    intMultisest.insert(15);
    cout<<"\nAfter insert, there are "<<intMultisest.count(15)<<" values of 15 in multiset\n";
    Ims::const_iterator result;//Iterator that cannot used to change value
    result = intMultisest.find(15);
    if(result!=intMultisest.end())//If iterator not at end
        cout<<"Found value 15\n";
    result = intMultisest.find(20);
    if(result==intMultisest.end())
        cout<<"Did not find value 20\n";
    intMultisest.insert(a,a+SIZE);
    cout<<"\nAfter insert, intMultiset contain :\n";
    copy(intMultisest.begin(),intMultisest.end(),output);
    //Determine lower and upper bound of 22
    cout<<"\n\nLower bound of 22 : "<<*(intMultisest.lower_bound(22));
    cout<<"\nUpper bound of 22 : "<<*(intMultisest.upper_bound(22));
    pair<Ims::const_iterator,Ims::const_iterator> p;//p represents pair of const_iterator
    p = intMultisest.equal_range(22);//Use equal_range to find upper and lower bound of 22
    cout<<"\n\nEqual range of 22 : "<<"\n   Lower bound:"<<*(p.first)<<"\n  Upper bound:"<<*(p.second);
    cout<<endl;
    return 0;
}
*/
/*
//Set Associative Container
#include<set>
#include<algorithm>
#include<iterator>
typedef set<double,less<double>> DoubleSet;
int main(){
    const int SIZE = 5;
    double a[SIZE] = {2.1,4.2,9.5,2.1,3.7};
    DoubleSet doubleset(a,a+SIZE);
    ostream_iterator<double> output(cout," ");
    cout<<"DoubleSet contains : ";
    copy(doubleset.begin(),doubleset.end(),output);
    pair<DoubleSet::const_iterator,bool> p;//p represent pair containing const_iterator and bool
    p=doubleset.insert(13.8);
    cout<<"\n\n"<<*(p.first)<<((p.second)?" was ":" was not ")<<" inserted";
    cout<<"\nDoubleSet contains : ";
    copy(doubleset.begin(),doubleset.end(),output);
    p=doubleset.insert(9.5);
    cout<<"\n\n"<<*(p.first)<<((p.second)?" was ":" was not ")<<" inserted";
    cout<<"\nDoubleSet contains : ";
    copy(doubleset.begin(),doubleset.end(),output);
    cout<<endl;
    return 0;
}
*/
/*
#include<vector>
#include<algorithm>
int main(){
    vector<int> v{12,2,34},c{11,32,4},a;
    int i = *(v.rbegin());
    cout<<i;
    cout<<*max(c.begin(),c.begin()+2);
    cout<<a.size();
    for(auto i = v.end()-1;i>=v.begin();i--){
        cout<<*i<<" ";
    }
    return 0;
}
*/
/*
#include<vector>
int main(){
    int r1=2,r2=4,r3=7;
    //vector<int> v{r1,r2,r3};
    int v[] = {r1,r2,r3};
    cout<<v[0];
    return 0;
}
*/
//Queue Container Adapter
/*
#include<queue>
using namespace std;
int main(){
    queue<double> values;
    values.push(3.2);
    values.push(9.8);
    values.push(5.4);
    cout<<"Popping from values : ";
    while(!values.empty()){
        cout<<values.front()<<' ';
        values.pop();
    }
    cout<<endl<<values.back();
    cout<<endl;
    return 0;
}
*/
/*#include<vector>
int main(){
    vector<int> v{2,5,4,6,9};
    auto a = v.begin();
    cout<<*a;
    return 0;
}*/
/*
//Algorithm
#include<vector>
#include<algorithm>
#include<iterator>
char nextLetter();//Generator Function;
int main(){
    vector<char> ch(10);
    ostream_iterator<char> output(cout," ");
    cout<<"Filling vector : ";
    fill(ch.begin(),ch.end(),'5');
    copy(ch.begin(),ch.end(),output);
    cout<<"\nFilling vector with certain range : ";
    fill_n(ch.begin(),5,'K');
    copy(ch.begin(),ch.end(),output);
    cout<<"\nVector after Genrating Values : ";
    generate(ch.begin(),ch.end(),nextLetter);// It Generate values using Generator Function
    copy(ch.begin(),ch.end(),output);
    cout<<"\nGenerating Values with certain range : ";
    generate_n(ch.begin(),5,nextLetter);
    copy(ch.begin(),ch.end(),output);
    return 0;
}
char nextLetter(){
    static char letter = 'A';
    return ++letter;
}
*/
/*
#include<vector>
#include<iterator>
#include<algorithm>
int main(){
    const int Size = 10;
    int a1[Size] = {1,2,3,4,5,6,7,8,9,10};
    int a2[Size] = {1,2,3,4,1000,6,7,8,9,10};
    vector<int> v1(a1,a1+Size);
    vector<int> v2(a1,a1+Size);
    vector<int> v3(a2,a2+Size);
    ostream_iterator<int> output(cout," ");
    bool result = equal(v1.begin(),v1.end(),v2.begin());
    cout<<"The Vector v1 "<<(result ? "is":"is not")<<" equal to Vector v2";
    result = equal(v1.begin(),v1.end(),v3.begin());
    cout<<"\nThe Vector v1 "<<(result ? "is":"is not")<<" equal to Vector v3";
    pair<vector<int>::iterator, vector<int>::iterator> location;
    location = mismatch(v1.begin(),v1.end(),v3.begin());
    cout<<"\nThere is a mismatch between v1 and v3 at location "<<(location.first-v1.begin());
    char c1[Size] = "HELLO", c2[Size] = "HELLO";
    result = lexicographical_compare(c1,c1+Size,c2,c2+Size);
    cout<<"\n"<<c1<<(result ? " is less than ":" is greater than or equal to ")<<c2;
    return 0;
}
*/
/*
#include<vector>
#include<algorithm>
#include<iterator>
bool greater9(int );
int main(){
    const int Size = 10;
    int a[Size] = {10,2,10,4,16,6,14,8,12,10};
    ostream_iterator<int> output(cout," ");
    vector<int> v(a,a+Size);
    vector<int>::iterator newLastElement;
    copy(v.begin(),v.end(),output);
    newLastElement = remove(v.begin(),v.end(),10);
    cout<<"\nAfter Remove function : ";
    copy(v.begin(),newLastElement,output);
    vector<int> v2(a,a+Size);
    vector<int> c(Size,0);
    cout<<"\nVector v2 : ";
    copy(v2.begin(),v2.end(),output);
    remove_copy(v2.begin(),v2.end(),c.begin(),10);
    cout<<"\nVector c : ";
    copy(c.begin(),c.end(),output);
    vector<int> v3(a,a+Size);
    cout<<"\nVector v3 : ";
    copy(v3.begin(),v3.end(),output);
    newLastElement = remove_if(v3.begin(),v3.end(),greater9);
    cout<<"\nAfter removing from v3 : ";
    copy(v3.begin(),newLastElement,output);
    vector<int> v4(a,a+Size);
    vector<int> c2(Size,0);
    cout<<"\nVector v4 : ";
    copy(v4.begin(),v4.end(),output);
    remove_copy_if(v4.begin(),v4.end(),c2.begin(),greater9);
    cout<<"\nAfter removing from v4 and copy to c2 : ";
    copy(c2.begin(),c2.end(),output);
    return 0;
}
bool greater9(int x){
    return x > 9;
}
*/
/*
#include<vector>
#include<algorithm>
#include<iterator>
bool greater9(int);
int main(){
    const int Size = 10;
    int a[Size] = {10,2,10,4,16,6,14,8,12,10};
    ostream_iterator<int> output(cout," ");
    vector<int> v1(a,a+Size);
    cout<<"Vector v1 : ";
    copy(v1.begin(),v1.end(),output);
    replace(v1.begin(),v1.end(),10,100);
    cout<<"\nVector v1 after replace : ";
    copy(v1.begin(),v1.end(),output);
    vector<int> v2(a,a+Size);
    vector<int> c1(Size);
    cout<<"\nVector v2 : ";
    copy(v2.begin(),v2.end(),output);
    replace_copy(v2.begin(),v2.end(),c1.begin(),10,100);
    cout<<"\nVector c1 after replace copy : ";
    copy(c1.begin(),c1.end(),output);
    vector<int> v3(a,a+Size);
    cout<<"\nVector v3 : ";
    copy(v3.begin(),v3.end(),output);
    replace_if(v3.begin(),v3.end(),greater9,100);
    cout<<"\nVector v3 after replace_if : ";
    copy(v3.begin(),v3.end(),output);
    vector<int> v4(a,a+Size), c2(Size);
    cout<<"\nVector v4 : ";
    copy(v4.begin(),v4.end(),output);
    replace_copy_if(v4.begin(),v4.end(),c2.begin(),greater9,100);
    cout<<"\nVector c2 after replace_copy_if : ";
    copy(c2.begin(),c2.end(),output);
    return 0;
}
bool greater9(int x){
    return x > 9;
}
*/
//Mathematical Operation
/*
#include<vector>
#include<algorithm>
#include<iterator>
#include<numeric>
bool greater9(int);
void square(int);
int cube(int);
int main(){
    const int Size = 10;
    int a1[Size] = {1,2,3,4,5,6,7,8,9,10};
    vector<int> v(a1,a1+Size);
    ostream_iterator<int> output(cout," ");
    cout<<"Vector v : ";
    copy(v.begin(),v.end(),output);
    random_shuffle(v.begin(),v.end());
    cout<<"\nVector v after random_shuffle : ";
    copy(v.begin(),v.end(),output);
    int a2[Size] = {100,2,8,1,50,3,8,8,9,10};
    vector<int> v2(a2,a2+Size);
    cout<<"\nVector v2 : ";
    copy(v2.begin(),v2.end(),output);
    int result = count(v2.begin(),v2.end(),8);
    cout<<"\nNumber of 8 : "<<result;
    result = count_if(v2.begin(),v2.end(),greater9);
    cout<<"\nNumber of element greater than 9 : "<<result;
    cout<<"\nMinimum element in v2 : "<<*(min_element(v2.begin(),v2.end()));
    cout<<"\nMaximum element in v2 : "<<*(max_element(v2.begin(),v2.end()));
    cout<<"\nThe total sum of element in v2 : "<<accumulate(v2.begin(),v2.end(),0);
    cout<<"\nThe Square of every element in v : ";
    for_each(v.begin(),v.end(),square);
    vector<int> c(Size);
    transform(v.begin(),v.end(),c.begin(),cube);
    cout<<"\nThe cube of element in v : ";
    copy(c.begin(),c.end(),output);
    cout<<endl;
    return 0;
}
bool greater9(int x){
    return x > 9;
}
void square(int val){
    cout<<val * val<<" ";
}
int cube(int val){
    return val*val*val;
}
*/
/*
//Searching and Sorting Algorithms
#include<vector>
#include<algorithm>
#include<iterator>
bool greater10(int);
int main(){
    const int Size = 10;
    int a[Size] = {10,2,17,5,16,8,13,11,20,7};
    vector<int> v(a,a+Size);
    ostream_iterator<int> output(cout," ");
    cout<<"Vector v : ";
    copy(v.begin(),v.end(),output);
    vector<int>::iterator location;
    location = find(v.begin(),v.end(),16);
    if(location != v.end())
        cout<<"\nLocation of element : "<<(location-v.begin());
    else
        cout<<"\nElement Not Found !!";
    location = find_if(v.begin(),v.end(),greater10);
    if(location != v.end())
        cout<<"\nThe element greater than 10 is "<<*location<<" at : "<<(location-v.begin());
    else
        cout<<"\nElement Not Found !!";
    sort(v.begin(),v.end());
    cout<<"\nSorted Vector v : ";
    copy(v.begin(),v.end(),output);
    if(binary_search(v.begin(),v.end(),13))
        cout<<"\nElement Found in v";
    else
        cout<<"\nElement not Found !!";
    return 0;
}
bool greater10(int x){
    return x > 10;
}
*/

//Codechef October Lunchtime
/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,i=1;
        cin>>n;
        int p = 1<<n;
        vector<int> v(n+1);
        int q = p / (n+1);
        fill_n(v.begin(),2,q);
        //v.push_back(q);
        //v.push_back(q);
        p -= (2*q);
        cout<<p<<"\n";
        n -= 1;
        cout<<n<<"\n";
        while((n-1)!=0){
            n--;
            p -= i;
            v.push_back(p);
        }
        v.push_back(p);
        sort(v.begin(),v.end());
        for(auto it=v.begin();it!=v.end();++it)
            cout<<*it<<" ";
        cout<<"\n";
        cout<<p;
    }
	return 0;
}
*/
/*
#include<algorithm>
#include<iterator>
int main(){
    const int Size = 10;
    int a[Size] = {1,2,3,4,5,6,7,8,9,10};
    ostream_iterator<int> output(cout," ");
    cout<<"Original Array : ";
    copy(a,a+Size,output);
    swap(a[0],a[1]);
    cout<<"\nArray after Swap : ";
    copy(a,a+Size,output);
    iter_swap(&a[0],&a[1]);
    cout<<"\nArray after iter_swap : ";
    copy(a,a+Size,output);
    swap_ranges(a,a+5,a+5);
    cout<<"\nArray after swap_ranges : ";
    copy(a,a+Size,output);
    return 0;
}
*/
/*
#include<algorithm>
#include<vector>
#include<iterator>
int main(){
    const int Size = 5;
    int a1[Size] = {1,3,5,7,9};
    int a2[Size] = {2,4,5,7,9};
    vector<int> v1(a1,a1+Size),v2(a2,a2+Size);
    ostream_iterator<int> output(cout," ");
    cout<<"Vector v1 : ";
    copy(v1.begin(),v1.end(),output);
    cout<<"\nVector v2 : ";
    copy(v2.begin(),v2.end(),output);
    vector<int> result(v1.size());
    copy_backward(v1.begin(),v1.end(),result.end());
    cout<<"\nAfter copy_backward : ";
    copy(result.begin(),result.end(),output);
    vector<int> result2(v1.size() + v2.size());
    merge(v1.begin(),v1.end(),v2.begin(),v2.end(),result2.begin());
    cout<<"\nAfter merge : ";
    copy(result2.begin(),result2.end(),output);
    vector<int>::iterator location;
    location = unique(result2.begin(),result2.end());
    cout<<"\nUnique elements are : ";
    copy(result2.begin(),location,output);
    cout<<"\nReverse elements : ";
    reverse(v1.begin(),v1.end());
    copy(v1.begin(),v1.end(),output);
    return 0;
}*/
/*
#include<algorithm>
#include<iterator>
#include<vector>
int main(){
    const int Size = 10;
    int a[Size] = {1,3,5,7,9,1,3,5,7,9};
    vector<int> v(a,a+Size);
    ostream_iterator<int> output(cout," ");
    cout<<"Vector v : ";
    copy(v.begin(),v.end(),output);
    inplace_merge(v.begin(),v.begin()+5,v.end());
    cout<<"\nAfter inplace_merge : ";
    copy(v.begin(),v.end(),output);
    vector<int> result1;
    unique_copy(v.begin(),v.end(),back_inserter(result1));
    cout<<"\nAfter unique_copy : ";
    copy(result1.begin(),result1.end(),output);
    vector<int> result2;
    reverse_copy(v.begin(),v.end(),back_inserter(result2));
    cout<<"\nAfter reverse_copy : ";
    copy(result2.begin(),result2.end(),output);
    return 0;
}*/
/*
#include<algorithm>
#include<iterator>
int main(){
    const int Size1 = 10,Size2 = 5,Size3 = 20;
    int a1[Size1] = {1,2,3,4,5,6,7,8,9,10};
    int a2[Size2] = {4,5,6,7,8};
    int a3[Size2] = {4,5,6,11,15};
    ostream_iterator<int> output(cout," ");
    cout<<"a1 contains : ";
    copy(a1,a1+Size1,output);
    cout<<"\na2 contains : ";
    copy(a2,a2+Size2,output);
    cout<<"\na3 contains : ";
    copy(a3,a3+Size2,output);
    if(includes(a1,a1+Size1,a2,a2+Size2))
        cout<<"\na1 includes a2";
    else
        cout<<"\na1 does not includes a2";
    cout<<(includes(a1,a1+Size1,a3,a3+Size2) ? "\na1 includes a3" : "\na1 does not includes a3");
    int differnce[Size1];
    int *ptr = set_difference(a1,a1+Size1,a2,a2+Size2,differnce);
    cout<<"\nAfter set_difference : ";
    copy(differnce,ptr,output);
    int intersection[Size1];
    ptr = set_intersection(a1,a1+Size1,a2,a2+Size2,intersection);
    cout<<"\nAfter set_intersection : ";
    copy(intersection,ptr,output);
    int symmetric_diff[Size1 + Size2];
    ptr = set_symmetric_difference(a1,a1+Size1,a3,a3+Size2,symmetric_diff);
    cout<<"\nAfter set_symmetric_difference : ";
    copy(symmetric_diff,ptr,output);
    int unionSet[Size3];
    ptr = set_union(a1,a1+Size1,a3,a3+Size2,unionSet);
    cout<<"\nAfter set_union : ";
    copy(unionSet,ptr,output);
    return 0;
}*/
/*
#include<algorithm>
#include<vector>
#include<iterator>
int main(){
    const int Size = 10;
    int a[Size] = {2,2,4,4,4,6,6,6,6,8};
    vector<int> v(a,a+Size);
    ostream_iterator<int> output(cout," ");
    cout<<"Vector v : ";
    copy(v.begin(),v.end(),output);
    vector<int>::iterator lower;
    lower = lower_bound(v.begin(),v.end(),6);
    cout<<"\nlower_bound for element : "<<(lower-v.begin());
    vector<int>::iterator upper;
    upper = upper_bound(v.begin(),v.end(),6);
    cout<<"\nupper_bound for element : "<<(upper-v.begin());
    pair<vector<int>::iterator,vector<int>::iterator> eq;
    eq = equal_range(v.begin(),v.end(),6);
    cout<<"\nAfter equal_range\nlower_bound for element : "<<(eq.first-v.begin())<<"\nupper_bound for element : "<<(eq.second-v.begin());
    return 0;
}*/
//Heapsort
/*
#include<algorithm>
#include<vector>
#include<iterator>
int main(){
    const int Size = 10;
    int a[Size] = {3,100,52,77,22,31,1,98,13,40};
    vector<int> v(a,a+Size);
    ostream_iterator<int> output(cout," ");
    cout<<"Vector v : ";
    copy(v.begin(),v.end(),output);
    make_heap(v.begin(),v.end());
    cout<<"\nAfter make_heap : ";
    copy(v.begin(),v.end(),output);
    sort_heap(v.begin(),v.end());
    cout<<"\nAfter sort_heap : ";
    copy(v.begin(),v.end(),output);
    //Performing Heap sort using push_heap and pop_heap
    vector<int> v2;
    cout<<"\nArray contains : ";
    copy(a,a+Size,output);
    cout<<endl;
    for(int i=0;i<Size;i++){
        v2.push_back(a[i]);
        push_heap(v2.begin(),v2.end());
        cout<<"\nv2 after push_heap : ";
        copy(v2.begin(),v2.end(),output);
    }
    cout<<endl;
    for(unsigned int j=0;j<v2.size();++j){
        cout<<"\nv2 after pop_heap "<<v2[0]<<" : ";
        pop_heap(v2.begin(),v2.end()-j);
        copy(v2.begin(),v2.end(),output);
    }
    return 0;
}
*/
//Sieve of Eratosthenes using bitset
/*
#include<iomanip>
#include<cmath>
#include<bitset>
int main(){
    const int Size = 1024;
    int value;
    bitset<Size> sieve;
    sieve.flip();
    sieve.reset(0);
    sieve.reset(1);
    int final_bit = sqrt(static_cast<double>(sieve.size())) + 1;
    for(int i=2;i<final_bit;++i){
        if(sieve.test(i)){
            for(int j=2*i;j<Size;j+=i)
                sieve.reset(j);
        }
    }
    cout<<"The Prime Number in the range 2 to 1023 are : \n";
    for(int k = 2,counter = 1;k < Size;++k){
        if(sieve.test(k)){
            cout<<setw(5)<<k;
            if(counter++ % 12 == 0)
                cout<<"\n";
        }
    }
    cout<<endl;
    cout<<"\nEnter the value (-1 to end) : ";
    cin>>value;
    while(value!=-1){
        cout<<value<<(sieve[value] ? " is Prime Number\n" : " is not Prime Number\n");
        cout<<"\nEnter the value (-1 to end) : ";
        cin>>value;
    }
    return 0;
}
*/
//Function Objects
/*
#include<algorithm>
#include<vector>
#include<numeric>
#include<functional>
#include<iterator>
int sumSquare(int total,int value){
    return total+value*value;
}
template<typename T>
class sumSquareClass : public binary_function<T,T,T>{
public:
    T operator()(const T &total,const T &value){
        return total+value*value;
    }
};
int main(){
    const int Size = 10;
    int a[Size] = {1,2,3,4,5,6,7,8,9,10};
    vector<int> v(a,a+Size);
    ostream_iterator<int> output(cout," ");
    cout<<"Vector v : ";
    copy(v.begin(),v.end(),output);
    int result;
    result = accumulate(v.begin(),v.end(),0,sumSquare);
    cout<<"\nThe sum of squares of Numbers : "<<result;
    result = accumulate(v.begin(),v.end(),0,sumSquareClass<int>());
    cout<<"\nThe sum of squares of Numbers using binary_function : "<<result;
    return 0;
}
*/
// 3n+1 problem (UVA Online Sphere)
#include<vector>
#include<algorithm>

int calculate(int n){
    int count = 1;
    while(n != 1){
        n = n % 2 == 0 ? n/2 : 3*n+1;
        count++;
    }

    return count;
}

int main(){
    
    int i = 1,j = 10;
    int n = j - i + 1;
    vector<int> store(n);

    for (int a = 0; a < n, i <= j; a++)
    {
        store[a] = calculate(i);
        i++;
    }
    
    cout<<*max_element(store.begin(), store.end());

    return 0;
}