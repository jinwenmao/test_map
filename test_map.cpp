// test_map.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<map> 
#include<string> 
#include<iostream> 
using namespace std;

// int main(int argc, char* argv[])
// {
// 	printf("Hello World!\n");
// 	return 0;
// }

 

int main(int argc, char* argv[]) { 
	map<string,int> myMap; // 声明一张表 // 依次给这张表添加元素 
	//_Pairib
	//map::_Pairib test;
//iterator _Where = this->lower_bound(_Keyval);
	//map::iterator test ;
	map<string,int>::_Pairib test;
//	 test = myMap.insert(pair<string, int>("a", 1)); 
test =	myMap.insert(pair<string, int>("b", 2)); 
	test = myMap.insert(pair<string, int>("c", 3)); // 遍历刚刚建的表 
	if (!test.second)
	{
		return -1;
	}
	test = myMap.insert(pair<string, int>("c", 300)); // 遍历刚刚建的表 
// 		if (!test.second)
// 	{
// 		return -1;
// 	}
	test = myMap.insert(pair<string, int>("c", 600)); // 遍历刚刚建的表 

	myMap["c"] =900;
		 test = myMap.insert(pair<string, int>("a", 1)); 
//	test.second 
	
	map<string,int>::iterator it; 
	for(it=myMap.begin(); it!=myMap.end(); ++it) 
	//	cout<<myMap.count(it->first)<<endl;
		cout<<"key: "<<it->first <<" value: "<<it->second<<endl; 
	//myMap.count()
	cout<<myMap.size()<<endl;
	return 0; 
}


// 作者：多宝鱼丁
// 链接：https://www.jianshu.com/p/4ddc02a22c9b
// 來源：简书
// 简书著作权归作者所有，任何形式的转载都请联系作者获得授权并注明出处。