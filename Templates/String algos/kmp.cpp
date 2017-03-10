
// Kmp(knuth morris pratt) algorithm :- used to find patterns in a given string.
// the worst case  : 0(n)
//  uses the degenerating property of the pattern that the subpatterns repeat more than once in the pattern
//  whenever we find a mismatch (after few matches) we already know the characters previously .. because few matches were made and we wont match them again.

// we compute the array lps[] while going the pattern pat[]
// lps[1..i] will store the longest proper prefix of pat[1..i] which is also the suffix of the pattern.

// ** Searching algo **
// When we compare pat[j] with txt[i] and see a mismatch, we know that characters pat[0..j-1] match with txt[i-j+1…i-1],
// and we also know that lps[j-1] characters of pat[0…j-1] are both proper prefix and suffix
//which means we do not need to match these lps[j-1] characters with txt[i-j…i-1] because we know that these characters will anyway match

// lps[] for aabaabaa will be lps=[0,1,0,1,2,0,1,2]

void kmp()
{
    int lenstr=strlen(ch);
    int lenpat=strlen(pat);

    int i=0,j=0;
    computelps();
    while(i<lenstr)
    {
        if(pat[j]==ch[i])
        {
            i++,j++;
        }

        if(j==lenpat)
        {
            printf("Match at : %d",i-j);
            j=lps[j-1];
        }
        else if(i<lenstr && pat[j]!=ch[i])
        {
            if(j!=0)
                j=lps[j-1];
            else
                i++;
        }
    }
}

void computelps()
{
    int i=0,j=0;
    lps[0]=0;
    i++;
    while(i<strlen(pat))
    {
        if(pat[i]==pat[j])
        {
            j++;
            lps[i]=j;
            i++;
        }
        else
        {
            if(j!=0)
            {
                j=lps[j-1];
            }
            else
            {
                lps[i]=0;
                i++;
            }
        }
    }
}
