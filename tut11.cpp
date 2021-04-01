#include<iostream>
using namespace std;
int main(){
    cout<<"Code snippets, Break and continue statements"<<endl;
    
    for (int val = 0;val<10;val++){
        cout<<val<<endl;
        
    //break statement
        if(val==5){
            cout<<"the loop will continue"<<endl;
            continue;
        }
    // continue statement
        else if (val==8)
        {
            cout<<"statement or loop will break here"<<endl;
            break;
        }   
    }
    return 0;
}

// the above code instead of writing everything on the file, save it as code snippets 
// go to manage(gear left bottom) => User snippets => cpp.json  
// fill it like the below code
/* 	"boilerplate": {
		"prefix": "BoilerPlate",
		"body": [
			"#include<iostream>",
			"using namespace std;",
			"int main(){",
			"\treturn 0;",
			"}"
		],
		"description": "this is the general boiler plate for cpp programming"
	}
}*/
// after finishing type the name of the prefix in the file in vs code editor and press enter 
// line 1-4 in the this file will be printed

