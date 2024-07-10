#include <iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main() {
	//creation
	unordered_map<string,int> m;
	//insertion
	//1
	pair<string,int> p = make_pair("babbar",3);
	m.insert(p);
	//2
	pair<string,int> q("code",2);
	m.insert(q);
	//3
	m["love"]=1;
	m["love"]=2;
	
	//searching
	cout<<m["babbar"] <<endl;
	cout<<m.at("love")<<endl;
	
	
	cout<<m["unknown"]<<endl;
	cout<<m.at("unknown")<<endl;
//size
	cout<<"size :"<<m.size()<<endl;
	
//to check the presence
  cout<<"count non existing:"<<m.count("bro")<<endl;
  cout<<"count  existing:"<<m.count("code")<<endl;

	
//erase
	m.erase("love");
	cout<<"size after erase :"<<m.size()<<endl;
	
//traverse
cout<<"using traversal "<<endl;
for(auto i :m){
	cout<<i.first <<" : "<<i.second<<endl;
}	
	
//iterator
cout<<"using iterator "<<endl;
unordered_map<string,int> :: iterator it = m.begin();
while(it != m.end()){
	cout<<it->first << " : "<<it->second<<endl;
	it++;
}	
	
	return 0;
}
