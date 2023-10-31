
int main(){
    int count=0;
    int a,b;
    cin>>a>>b;
    vector<int> vec;
    vec.push_back(b);
    while(b>0){
        if(b%2==0){
            b=b/2;
            count++;
            vec.push_back(b);

            if(a==b){
                break;
            }
        }
        else if(b%10==1){
            b=(b-1)/10;
            count++;
            vec.push_back(b);
            if(a==b){
                break;
            }
        }
    }
    sort(vec.begin(),vec.end());
    if(a==b){
        cout<<"Yes\n";
        cout<<count+1<<endl;
        for(int &i: vec){
            cout<<i<<" ";
        }
    }
    else{
        cout<<"No";
    }
}
