#include <iostream>
#include <string>
using namespace std;

int main()
{

    int nbc;
    int a,b,x,m,n;
    int q;
    string op;

    cin >> nbc;

    while(nbc--)
    {

        cin >> a >> b >> x >> m >> n >> q;
        int DATA[n][5];
        int cont[5][n+1];
        bool rem[n];

        for (int r=0; r<n; r++)
                for (int c=0; c<5; c++){
                  long v1 = (long) a * (r==0?0:DATA[r-1][c]);
                  long v2 = (long) b * (c==0?0:DATA[r][c-1]);
                  DATA[r][c] = (int) ((v1 + v2 + x) % m);
                  cont[c][DATA[r][c]]++;
                }

        while(q--)
        {
            cin >> op;
            if(op == "insert")
            {

                     for (int c=0; c<5; c++){
                            int val;
                            cin >> val;
                            DATA[n][c] = val;
                            cont[c][DATA[n][c]]++;
                    } // Insert DATA
            }


/*if (op=="remove"){
                    int val; cin >> val;
                    int r = val - 1;
                    if (r<0 || r>=n || rem[r])      continue;
                    for (int c=0; c<5; c++)      col[c][arr[r][c]]-;
                    rem[r] = true;
            }



            */
            if(op == "range") {

                int c,L,R;
                cin >> c >> L >> R;
                c--;
                int cnt = 0;
                for (int v=L; v<=R; v++) cnt += DATA[c][v];
                cout << cnt << endl;
            }
            if (op=="max"){ cout << "max" << endl;
                int val;
                cin >> val;
                int c = val - 1;
                for (int v=10000; v>=0; v--) if (DATA[c][v]>0){
                cout << v << endl; break; }


            }
            if (op=="min"){ cout << "min" << endl;
                int val; cin >> val;
                int c = val - 1;
                for (int v=0; v<=10000; v++) if (DATA[c][v]>0){
                cout << v << endl; break; }
            }

        }
    }
    return 0;
}
