#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 1;
int visited[N];
int main()
{
    for (int i = 0; i <= N; i++)
    {
        visited[i] = false;
    }
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    long long c = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (visited[i]==false)
        {
            if (s[i] == 'a')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'A')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                    j++;
                }
            }
           
        }
        else if (s[i] == 'A')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'a')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
            else if (s[i] == 'b')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'B')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
           else if (s[i] == 'B')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'b')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
            else if (s[i] == 'c')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'C')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
           else if (s[i] == 'C')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'c')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
            else if (s[i] == 'd')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'D')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
           else if (s[i] == 'D')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'd')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
            else if (s[i] == 'e')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'E')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
           else if (s[i] == 'E')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'e')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
            else if (s[i] == 'f')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'F')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
           else if (s[i] == 'F')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'f')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
            else if (s[i] == 'g')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'G')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
           else if (s[i] == 'G')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'g')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
            else if (s[i] == 'H')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'h')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
           else if (s[i] == 'H')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'h')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
            else if (s[i] == 'i')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'I')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
           else if (s[i] == 'I')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'i')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
            else if (s[i] == 'j')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'J')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
           else if (s[i] == 'J')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'j')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
            else if (s[i] == 'k')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'K')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
           else if (s[i] == 'K')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'k')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
            else if (s[i] == 'l')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'L')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
           else if (s[i] == 'L')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'l')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
            else if (s[i] == 'm')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'M')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
           else if (s[i] == 'M')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'm')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
            else if (s[i] == 'n')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'N')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
           else if (s[i] == 'N')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'n')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
            else if (s[i] == 'o')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'O')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
           else if (s[i] == 'O')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'o')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
            else if (s[i] == 'p')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'P')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
           else if (s[i] == 'P')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'p')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
            else if (s[i] == 'q')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'Q')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
           else if (s[i] == 'Q')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'q')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
            else if (s[i] == 'r')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'R')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
           else if (s[i] == 'R')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'r')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
            else if (s[i] == 's')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'S')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
           else if (s[i] == 'S')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 's')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
            else if (s[i] == 't')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'T')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
           else if (s[i] == 'T')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 't')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
            else if (s[i] == 'u')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'U')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
           else if (s[i] == 'U')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'u')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
            else if (s[i] == 'v')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'V')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
           else if (s[i] == 'V')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'v')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
            else if (s[i] == 'w')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'W')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
           else if (s[i] == 'W')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'w')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }else if (s[i] == 'x')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'X')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
           else if (s[i] == 'X')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'x')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
            else if (s[i] == 'y')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'Y')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
           else if (s[i] == 'Y')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'y')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
            else if (s[i] == 'z')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'Z')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
           else if (s[i] == 'Z')
            {
                int j = i + 1;
                visited[i] = true;
                while (1)
                {
                    if (visited[j] == false)
                    {
                        if (s[j] == 'z')
                        {
                            visited[j] = true;
                            c++;
                            break;
                        }
                    }
                    if(j==s.size()){
                        break;
                    }
                }
            }
    }
    cout<<c<<endl;
    return 0;
}