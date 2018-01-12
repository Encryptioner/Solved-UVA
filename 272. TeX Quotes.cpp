#include <iostream>//"=034 , '=039 , `=096 , OPPOSITE `=180
#include <cstdio>
#include <string>

using namespace std;

int main()
{
    string s;
    char c;
    long long i,j,x,l;

    cin>>c;
    if(c==34){
    printf("%c%c\n",96,96);}

    freopen("272. TeX Quotes.txt","r",stdin);
    while(cin>>s)
    {
        x=1;
        //l=s.length();
        for(i=0;i<s.length();i++)
        {
            if(s[i]==34 && x%2!=0)
            {
                s[i]=96;
                for(j=i+1;j<s.length()+1;j++)
                {
                    s[j+1]=s[j];
                }
                s[i+1]=96;
                x++;
            }
            if(s[i]==34 && x%2==0)
            {
                //s[i]=opposite 96;
                s[i]=42;
                for(j=i+1;j<s.length()+1;j++)
                {
                    s[j+1]=s[j];
                }
                s[i+1]=42;
                x++;
            }
        }
        cout<<s<<endl;
    }

    return 0;
}
/*printf("%c\n",34);
    printf("%c\n",39);
    printf("%c\n",96);
    printf("%c\n",180);
    127- ⌂ Ç ü é â ä à å ç ê ë è ï
    140- î ì Ä Å É æ Æ ô ö ò ☼0 ù ÿ Ö Ü ¢ ☼6 ¥ ☼8 ƒ á í ó ú ñ Ñ ª º ¿ ⌐ ¬ ½ ¼ ¡ « » ░ ▒ ▓ │ ┤ ╡ ╢ ╖ ╕ ╣ ║ ╗ ╝ ╜ ╛ ┐ └ ┴ ┬ ├ ─ ┼ ╞ ╟ ╚ ╔ ╩ ╦ ¶4 ═ ╬ ╧ ╨ ╤ ╥ ╙ ╘ ╒ ╓ ╫ ╪ ┘ ┌ █ ▄ ▌ ▐ ▬3 ▬4 ß Γ π Σ σ µ τ Φ Θ Ω δ
    235- δ ∞ φ ε ≡ ± ≥ ≤ ⌠ ⌡ ÷ ≈ ° ∙ · √ ⁿ ² ■    ☺ ☻ ♥ ♦ ♣ ♠ • ◘ ○ ♂ ♀ ♪ ♫ ☼ ► ◄ ↕ ‼ ¶ §
    278- ▬ ↨ ↑ ↓ → ← ∟ ↔ ▲ ▼   ! "" # $ % & '' () ) * + , ² . /
    304- 0 1 ▲6 3 4 5 6 7 8 9 : ; < = > ? @ A B C
    347- [] \ ] ^ _ ` a b
    379- {} | } ~ ⌂ Ç ü é â */
