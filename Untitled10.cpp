vector<int> result;
if(p.length()>s.length()
 return result;
vector<int> pchars(26,0);
for(char c:p)
pchars[c-'a']+=1;
int start=0;
for(int i=0;i<p.length();i++)
{
	 pchars[s[i]-'a']-=1;
	 bool match=true;
	for(int pc:pchars)
	{
		if(pc!=0
		{
		match=false;
		break;
		}
	}
}
if(match)
reult.push_back(start);
start++;
while(start<=s.length()-p.length())
{
 int idx1=s[start-1]-'a';	
 
 int idxs=s[start+p.length()-1]-'a';
 pchars[idx1]+=1;
pchars[idx2]+=1;
 bool match=true;
	for(int pc:pchars)
	{
		if(pc!=0
		{
		match=false;
		break;
		}
	} 
	
if(match)
reult.push_back(start);
start++;
}
return result;


