#include <iostream>
#include <deque> 
#include<algorithm>
#define loop(i,j,n) for(int i=j;i<n;i++)
using namespace std;


//https://www.hackerrank.com/challenges/deque-stl/problem
// Solution on  https://www.geeksforgeeks.org/sliding-window-maximum-maximum-of-all-subarrays-of-size-k/#disqus_thread
void printKMax(long long int arr[], long long int n, long long int k)
{
/*	This solution gives runtime error

	deque<long long int> q(k);

 for(int i=0;i<n-k+1;i++)
 {
 		if(q.empty()) q.push_front(i);
     
 		loop(j,i+1,k+i)
 		{	
 			if(arr[j]>=arr[q.front()]) 
            {
                q.push_front(j); 
                q.pop_back();
            }
 		}
		
		cout<<arr[q.front()]<<" ";
        q.pop_back();

    }
  */

//Right solution is this and link is given in above comments	
std::deque<int>  Qi(k);
 
   
    for (i = 0; i < k; ++i)
    { 
        while ( (!Qi.empty()) && arr[i] >= arr[Qi.back()])
            Qi.pop_back();  
     
    }
 
   
    for ( ; i < n; ++i)
    {
          cout << arr[Qi.front()] << " ";
 
      
        while ( (!Qi.empty()) && Qi.front() <= i - k)
            Qi.pop_front();  

   	  while ( (!Qi.empty()) && arr[i] >= arr[Qi.back()])
            Qi.pop_back();
 
        Qi.push_back(i);
    }    
    cout << arr[Qi.front()];
}

int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout.precision(0);
    cout << fixed;
    
	long long int t;
	cin >> t;
    
   
	while(t>0)
    {
		long long int n,k;
    	cin >> n >> k;
    	long long int i;
    	long long int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
        
            cout<<endl;
        
         t--;
  	}
  	return 0;
}