
int fact(int n)
{
  if (n<3)
    return n;
  else
    return fact(n-1)*n; 
}

ptrace(1);
otrace(1);
echo(1);

class tst
{
  int a,b;
  int op(int a,int b);
};


tst t;



int plus(int a,int b)
{
  return a+b;
}
 
int minus(int a,int b)
{
  return a-b;
}

t.a=1;
t.b=5;
t.op=&plus;

void done(tst *l)
{
  ? l->op(l->a,l->b),"\r\n";
}

/*
void doit(int op(int a,int b),int c,int d)
{
  ? op(c,d),"\r\n";
}
*/
;
 
 