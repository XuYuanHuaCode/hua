// Rasterization
struct xyf;
struct xy{
	int x;
	int y;

	xy(){
	}
	xy(int m){
		x=m;
		y=m;
	}
	xy(int x,int y){
		this->x=x;
		this->y=y;
	}
	xy(xyf m);
xy operator  *(xy&m){return xy(x *m.x,y *m.y);}
xy operator  /(xy&m){return xy(x /m.x,y /m.y);}
xy operator  %(xy&m){return xy(x %m.x,y %m.y);}
xy operator  +(xy&m){return xy(x +m.x,y +m.y);}
xy operator  -(xy&m){return xy(x -m.x,y -m.y);}
xy operator <<(xy&m){return xy(x<<m.x,y<<m.y);}
xy operator >>(xy&m){return xy(x>>m.x,y>>m.y);}
xy operator  &(xy&m){return xy(x &m.x,y &m.y);}
xy operator  |(xy&m){return xy(x |m.x,y |m.y);}
xy operator  ^(xy&m){return xy(x ^m.x,y ^m.y);}
xy operator  *=(xy&m){x *=m.x;y *=m.y;return *this;}
xy operator  /=(xy&m){x /=m.x;y /=m.y;return *this;}
xy operator  %=(xy&m){x %=m.x;y %=m.y;return *this;}
xy operator  +=(xy&m){x +=m.x;y +=m.y;return *this;}
xy operator  -=(xy&m){x -=m.x;y -=m.y;return *this;}
xy operator <<=(xy&m){x<<=m.x;y<<=m.y;return *this;}
xy operator >>=(xy&m){x>>=m.x;y>>=m.y;return *this;}
xy operator  &=(xy&m){x &=m.x;y &=m.y;return *this;}
xy operator  |=(xy&m){x |=m.x;y |=m.y;return *this;}
xy operator  ^=(xy&m){x ^=m.x;y ^=m.y;return *this;}
xy operator  *(int m){return xy(x *m,y *m);}
xy operator  /(int m){return xy(x /m,y /m);}
xy operator  %(int m){return xy(x %m,y %m);}
xy operator  +(int m){return xy(x +m,y +m);}
xy operator  -(int m){return xy(x -m,y -m);}
xy operator <<(int m){return xy(x<<m,y<<m);}
xy operator >>(int m){return xy(x>>m,y>>m);}
xy operator  &(int m){return xy(x &m,y &m);}
xy operator  |(int m){return xy(x |m,y |m);}
xy operator  ^(int m){return xy(x ^m,y ^m);}
xy operator  *=(int m){x *=m;y *=m;return *this;}
xy operator  /=(int m){x /=m;y /=m;return *this;}
xy operator  %=(int m){x %=m;y %=m;return *this;}
xy operator  +=(int m){x +=m;y +=m;return *this;}
xy operator  -=(int m){x -=m;y -=m;return *this;}
xy operator <<=(int m){x<<=m;y<<=m;return *this;}
xy operator >>=(int m){x>>=m;y>>=m;return *this;}
xy operator  &=(int m){x &=m;y &=m;return *this;}
xy operator  |=(int m){x |=m;y |=m;return *this;}
xy operator  ^=(int m){x ^=m;y ^=m;return *this;}
bool operator  <(xy&m){return((unsigned(x) <unsigned(m.x))&&(unsigned(y) <unsigned(m.y)));}
bool operator  >(xy&m){return((unsigned(x) >unsigned(m.x))&&(unsigned(y) >unsigned(m.y)));}
bool operator <=(xy&m){return((unsigned(x)<=unsigned(m.x))&&(unsigned(y)<=unsigned(m.y)));}
bool operator >=(xy&m){return((unsigned(x)>=unsigned(m.x))&&(unsigned(y)>=unsigned(m.y)));}
bool operator ==(xy&m){return((unsigned(x)==unsigned(m.x))&&(unsigned(y)==unsigned(m.y)));}
bool operator  <(int m){return((unsigned(x) <unsigned(m))&&(unsigned(y) <unsigned(m)));}
bool operator  >(int m){return((unsigned(x) >unsigned(m))&&(unsigned(y) >unsigned(m)));}
bool operator <=(int m){return((unsigned(x)<=unsigned(m))&&(unsigned(y)<=unsigned(m)));}
bool operator >=(int m){return((unsigned(x)>=unsigned(m))&&(unsigned(y)>=unsigned(m)));}
bool operator ==(int m){return((unsigned(x)==unsigned(m))&&(unsigned(y)==unsigned(m)));}
xy operator  !(){return xy( !x, !y);}
xy operator  ~(){return xy( ~x, ~y);}
xy operator  +(){return xy( +x, +y);}
xy operator  -(){return xy( -x, -y);}



	xy get_number(){
		xy m=0;
		if(x>0)m.x=+x;if(x<0)m.x=-x;
		if(y>0)m.y=+y;if(y<0)m.y=-y;
		return m;
	}
	xy get_flag(){
		xy m=0;
		if(x>0)m.x=+1;if(x<0)m.x=-1;
		if(y>0)m.y=+1;if(y<0)m.y=-1;
		return m;
	}


	int sqrt_xx_yy(){
		return sqrt(xx_yy());
	}
	void x_y(){
		int v=x;x=y;y=v;
	}
	int xx(){return x*x;}
	int yy(){return y*y;}
	int xx_yy(){
		return (x*x+y*y);
	}
	
	
	xy operator =(xy&m){
		x=m.x;
		y=m.y;
		return *this;
	}
	xy operator =(int m){
		x=m;
		y=m;
		return *this;
	}
	xy operator ++(int){
		xy temp=*this;
		++x;
		++y;
		return temp;
	}
	xy operator ++(){
		x++;
		y++;
		return *this;
	}

	xy operator --(int){
		xy temp=*this;
		--x;
		--y;
		return temp;
	}
	xy operator --(){
		x--;
		y--;
		return *this;
	}

};

struct xyf{
	double x;
	double y;

	xyf(){
	}
	xyf(double m){
		x=m;
		y=m;
	}
	xyf(double x,double y){
		this->x=x;
		this->y=y;
	}
    xyf(xy m){
		this->x=m.x;
		this->y=m.y;
	}
xyf operator  *(xyf&m){return xyf(x *m.x,y *m.y);}
xyf operator  /(xyf&m){return xyf(x /m.x,y /m.y);}
xyf operator  +(xyf&m){return xyf(x +m.x,y +m.y);}
xyf operator  -(xyf&m){return xyf(x -m.x,y -m.y);}
xyf operator  *=(xyf&m){x *=m.x;y *=m.y;return *this;}
xyf operator  /=(xyf&m){x /=m.x;y /=m.y;return *this;}
xyf operator  +=(xyf&m){x +=m.x;y +=m.y;return *this;}
xyf operator  -=(xyf&m){x -=m.x;y -=m.y;return *this;}
xyf operator  *(double m){return xyf(x *m,y *m);}
xyf operator  /(double m){return xyf(x /m,y /m);}
xyf operator  +(double m){return xyf(x +m,y +m);}
xyf operator  -(double m){return xyf(x -m,y -m);}
xyf operator  *=(double m){x *=m;y *=m;return *this;}
xyf operator  /=(double m){x /=m;y /=m;return *this;}
xyf operator  +=(double m){x +=m;y +=m;return *this;}
xyf operator  -=(double m){x -=m;y -=m;return *this;}




	xyf get_number(){
		xyf m=0;
		if(x>0)m.x=+x;if(x<0)m.x=-x;
		if(y>0)m.y=+y;if(y<0)m.y=-y;
		return m;
	}
	xyf get_flag(){
		xyf m=0;
		if(x>0)m.x=+1;if(x<0)m.x=-1;
		if(y>0)m.y=+1;if(y<0)m.y=-1;
		return m;
	}


	double sqrt_xx_yy(){
		return sqrt(xx_yy());
	}
	void x_y(){
		double v=x;x=y;y=v;
	}
	double xx(){return x*x;}
	double yy(){return y*y;}
	double xx_yy(){
		return (x*x+y*y);
	}
	
	xyf operator =(xy&m){
		x=m.x;
		y=m.y;
		return *this;
	}
	xyf operator =(xyf&m){
		x=m.x;
		y=m.y;
		return *this;
	}
	xyf operator =(double m){
		x=m;
		y=m;
		return *this;
	}
	xyf operator ++(int){
		xyf temp=*this;
		++x;
		++y;
		return temp;
	}
	xyf operator ++(){
		x++;
		y++;
		return *this;
	}

	xyf operator --(int){
		xyf temp=*this;
		--x;
		--y;
		return temp;
	}
	xyf operator --(){
		x--;
		y--;
		return *this;
	}

};

xy::xy(xyf m){
		x=m.x;
		y=m.y;
	}

struct min_max{
    int min;
    int max;
    void set(int v){
        if(min>v)min=v;
        if(max<v)max=v;
    }
    void init(){
        min=+0x12341234;
        max=-0x12341234;
    }
};
int fill(xy*sa,int sn,xy*da){
    xy*sb=sa+sn;
    
    min_max ya;
    ya.init();
    for(xy*s=sa;s<sb;s++)ya.set(s->y);
    if(ya.min<=ya.max){}else return 0;

    min_max xa[xymax];
    
    for(int y=ya.min;y<=ya.max;y++)xa[y-ya.min].init();
    for(xy*s=sa;s<sb;s++)xa[s->y-ya.min].set(s->x);

    xy*db=da;
    for(int y=ya.min;y<=ya.max;y++){
        for(int x=xa[y-ya.min].min;x<=xa[y-ya.min].max;x++)*db++=xy(x,y);
    }
    return (db-da);
}



int paint_line(xy r,xy *da){
	// float->int (f+0.5)
	// [-0.5,+0.5)=0
	// [+0.5,+1.5)=1
	// [+1.5,+2.5)=2
    // x*a+b*y=0;
    // (x+v)*a=x*a+v*a;
    // (y+v)*a=y*a+v*a;
    xy n=r.get_number();
    xy f=r.get_flag();
    xy nn=n*2;
    xy d=0;
    xy*db=da;
    *db++=d;
    if(n.y<n.x){
        int v=n.x;
        while(d.x!=r.x){
            d.x+=f.x;
            v-=nn.y;
            if(v<0){
                v+=nn.x;
                d.y+=f.y;
            }
            *db++=d;
        }
    }else{
        int v=n.y;
        while(d.y!=r.y){
            d.y+=f.y;
            v-=nn.x;
            if(v<0){
                v+=nn.y;
                d.x+=f.x;
            }
            *db++=d;
        }
    }
    return (db-da);
}
int paint_line(xy a,xy b,xy *da){
    int dn=paint_line(b-a,da);
    for(int i=0;i<dn;i++)da[i]+=a;
    return dn;
}
int fill_line(xy r,xy*da,int w){
    if(r.x==0&&r.y==0)return 0;
    if(w<0)return 0;
    if(w==1)return paint_line(r,da);
    w/=2;//////////////
   
    const int rl=r.sqrt_xx_yy();
    xy l(w*r.x/rl,w*r.y/rl);
    xy a(-l.y,+l.x);
    xy b(+l.y,-l.x);
    xy c=b+r;
    xy d=a+r;

    xy sa[xymax*4];
    xy*sb=sa;
    sb+=paint_line(a,b,sb);
    sb+=paint_line(b,c,sb);
    sb+=paint_line(c,d,sb);
    sb+=paint_line(d,a,sb);
   
    
    return fill(sa,sb-sa,da);////////////
    xy*db=da;
    for(xy*s=sa;s<sb;s++)*db++=*s;
    return (db-da);


   
}
int fill_line(xy a,xy b,xy *da,int w){
    int dn=fill_line(b-a,da,w);
    for(int i=0;i<dn;i++)da[i]+=a;
    return dn;
}


int paint_circle(int r,xy*da){
    // x*x+y*y=r*r
    // (x+v)*(x+v)=x*x+2*x*v+v*v
    // (y+v)*(y+v)=y*y+2*y*v+v*v

    if(1<=r){}else return 0;
    r*=2;///////////
    xy*db=da;
    {
        xy d(0,r-1);
        *db++=d;
        int z=d.x*d.x+d.y*d.y-r*r;// x*x+y*y-r*r
        do{
            z+=(d.x+1)<<2;// 2*d.x*2+2*2;
            d.x+=2;
            if(0<z&&-1<d.y){
                do{
                    z+=(-d.y+1)<<2;// -2*d.y*2+2*2
                    d.y-=2;
                    *db++=d;
                }while(0<z&&-1<d.y);
            }else{
                *db++=d;
            }
        }while(d.x<r);
    }
    for(xy*d=da;d<db;d++){
        d->x>>=1;
        d->y=(d->y+1)>>1;
    }
    

    for(xy*dc=db,*d=db;--d>=da;)*db++=xy(+d->x,-d->y);
    for(xy*dc=db,*d=db;--d> da;)*db++=xy(-d->x,+d->y);
    return db-da;
}
int paint_circle(xy o,int r,xy*da){
    int dn=paint_circle(r,da);
    for(int i=0;i<dn;i++)da[i]+=o;
    return dn;
}
int fill_circle(int r,xy*da){
    xy sa[xymax*2];
    int sn=paint_circle(r,sa);
    return fill(sa,sn,da);
}
int fill_circle(xy o,int r,xy*da){
    int dn=fill_circle(r,da);
    for(int i=0;i<dn;i++)da[i]+=o;
    return dn;
}

int paint_ellipse(xy r,xy*da){
    // x*x/(a*a)+y*y/(b*b)=1
    // x*x*b*b+y*y*a*a=a*a*b*b
    // x*x*b*b+y*y*a*a-a*a*b*b=0
    // a*a*(x+v)*(x*v)=a*a*(x*x+2*x*v+v*v)=x*x*a*a+a*a*(2*x*v+v*v)
    // a*a*(y+v)*(y*v)=a*a*(y*y+2*y*v+v*v)=y*y*a*a+a*a*(2*y*v+v*v)
	// int i
	// float (i-0.5,i+0.5]
    r=r.get_number();//abs
    if(r>=1){}else return 0;

    xy*db=da;

    xy rn=r.get_number();
          
    if(rn.y<rn.x){
        {
            // bb*xx+aa*yy=aa*bb
            const int a=r.x*2;
            const int b=r.y*2;
            const __int64 aa=a*a;
            const __int64 bb=b*b;
            xy d;
            d.x=0;
            d.y=b-1;

            *db++=d;
            __int64 z=bb*d.x*d.x+aa*d.y*d.y-aa*bb;
            do{
                z+=bb*((d.x+1)<<2);// 2*d.x*2+2*2;
                d.x+=2;
                if(0<z&&-1<d.y){
                    do{
                        z+=aa*((-d.y+1)<<2);// -2*d.y*2+2*2
                        d.y-=2;
                        *db++=d;
                    }while(0<z&&-1<d.y);
                }else{
                    *db++=d;
                }
            }while(d.x<a);
        }
        for(xy*d=da;d<db;d++){
            d->x>>=1;
            d->y=(d->y+1)>>1;
        }
    }else{
         {
            // bb*xx+aa*yy=aa*bb
            const int a=r.y*2;
            const int b=r.x*2;
            const __int64 aa=a*a;
            const __int64 bb=b*b;
            xy d;
            d.y=0;
            d.x=b-1;

            *db++=d;
            __int64 z=bb*d.y*d.y+aa*d.x*d.x-aa*bb;
            do{
                z+=bb*((d.y+1)<<2);// 2*d.y*2+2*2;
                d.y+=2;
                if(0<z&&-1<d.x){
                    do{
                        z+=aa*((-d.x+1)<<2);// -2*d.x*2+2*2
                        d.x-=2;
                        *db++=d;
                    }while(0<z&&-1<d.x);
                }else{
                    *db++=d;
                }
            }while(d.y<a);
        }
        for(xy*d=da;d<db;d++){
            d->y>>=1;
            d->x=(d->x+1)>>1;
        }
     

    }

    for(xy*dc=db,*d=db;--d>=da;)*db++=xy(+d->x,-d->y);
    for(xy*dc=db,*d=db;--d> da;)*db++=xy(-d->x,+d->y);
    return db-da;
}
int paint_ellipse(xy a,xy b,xy*da){
    int dn=paint_ellipse(b-a,da);
    for(int i=0;i<dn;i++)da[i]+=a;
    return dn;
}
int fill_ellipse(xy r,xy*da){
    xy sa[xymax*2];
    int sn=paint_ellipse(r,sa);
    return fill(sa,sn,da);
}
int fill_ellipse(xy a,xy b,xy*da){
    int dn=fill_ellipse(b-a,da);
    for(int i=0;i<dn;i++)da[i]+=a;
    return dn;
}
int bezier(xy*sa,int sn,xy*da){
    sn--;/////////////////
    int tn;{
        xy tnxy=0;
        for(int si=0;si<sn;si++){
            tnxy+=(sa[si+1]-sa[si]).get_number();// abs()
        }
        tn=tnxy.x+tnxy.y;
		tn*=2;
		if(tn==0)return 0;//////////////////
    }
    const int n=100; if(1<=sn&&sn<=n){}else return 0;//////////////
    xyf a[n];
    xyf b[n];
    xyf c[n];
    for(int i=0;i<sn;i++){
        a[i]=sa[i];
        b[i]=xyf(sa[i+1]-sa[i])/tn;
    }
    int dn=0;
    for(int ti=0;ti<tn;ti++){
        const float tt=ti/float(tn);
        for(int i=0;i<sn;i++)c[i]=a[i];
        for(int n=sn;1<n;n--)for(int i=0;(i+1)<n;i++)c[i]=c[i]+(c[i+1]-c[i])*tt;;
        xy t(c->x,c->y);
        for(int di=0;1;di++){
            if(di<dn){
                if(t==da[di])break;
            }else{
                da[dn++]=t;
                break;
            }
        }
        for(int i=0;i<sn;i++)a[i]+=b[i];
    }
    return dn;
}
