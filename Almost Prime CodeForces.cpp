//Author by Md. Zahid Fesabelilla


#include <bits/stdc++.h>
using namespace std;
vector<int>vec;

int main(void)
{

    int n,counter=0;
    int div=0;
    cin>>n;
    for(int i=2; i<n; i++)
    {
        for(int j=2; j<=i; j++)
        {
            if(i==j)
                vec.push_back(i);
            else if(i%j==0)
                break;

        }

    }

   // for(int i=0;i<vec.size();i++){
     // cout<<vec[i]<<" "<<endl;

    //}

    for(int i=1; i<=n; i++)
    {
        counter=0;
        for(int j=0; j<vec.size(); j++)
        {
           // if(i>vec[j])
            //{
                if(i%vec[j]==0)
                {
                    counter++;
                }
            //}

        }
        if(counter==2)
        {
            div++;
        }

    }

    cout<<div<<endl;

    return 0;
}
