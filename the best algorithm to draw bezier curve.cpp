
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




const int curve_max=10;
const int curve_bit=16;
const int curve_bit_add=1<<(curve_bit-1);
xy curve_get(xy m){
	m+=curve_bit_add;
	m>>=curve_bit;
	return m;
}
xy*curve_call3(xy s1,xy s2,xy s3,xy*da){
	xy y1=(s1+s2)>>1;
	xy y2=(s2+s3)>>1;  
	xy zz=(y1+y2)>>1;
	xy z=curve_get(zz);
	if(z==curve_get(s1))return da;
	if(z==curve_get(s3))return da;
	da=curve_call3(s1,y1,zz,da);
	*da++=z;
	da=curve_call3(s3,y2,zz,da);
	return da;
}
xy*curve_call4(xy s1,xy s2,xy s3,xy s4,xy*da){
	xy x1=(s1+s2)>>1;
	xy x2=(s2+s3)>>1;
	xy x3=(s3+s4)>>1;
	xy y1=(x1+x2)>>1;
	xy y2=(x2+x3)>>1;  
	xy zz=(y1+y2)>>1;
	xy z=curve_get(zz);
	if(z==curve_get(s1))return da;
	if(z==curve_get(s4))return da;
	da=curve_call4(s1,x1,y1,zz,da);
	*da++=z;
	da=curve_call4(s4,x3,y2,zz,da);
	return da;
}
xy*curve_call(xy*sa,int sn,xy*da){
	xy a[curve_max];
    xy b[curve_max];
    xy s[curve_max];
	for(int i=0;i<sn;i++)s[i]=sa[i];
	for(int n=sn,j=0;0<n;n--,j++){
		a[j]=s[0];
        b[j]=s[n-1];
		for(int i=1;i<n;i++)s[i-1]=(s[i-1]+s[i])>>1;;
	}
	xy z=curve_get(s[0]);
	if(z==curve_get(sa[0]))return da;
	if(z==curve_get(sa[sn-1]))return da;
	da=curve_call(a,sn,da);
	*da++=z;
	da=curve_call(b,sn,da);
	return da;
}

// the best algorithm to draw bezier curve
int curve(xy*sa__,int sn,xy*da){
	if(sn==2)return paint_line(sa__[0],sa__[1],da);
	
	if(3<=sn&&sn<=curve_max){}else return 0;
	xy sa[curve_max];
	for(int i=0;i<sn;i++)sa[i]=sa__[i]<<curve_bit;
	xy*db=da;
	*db++=curve_get(sa[0]); 
	db=curve_call(sa,sn,db);
	/*
	if(0){
	}else if(3==sn){db=curve_call3(sa[0],sa[1],sa[2],db);
	}else if(4==sn){db=curve_call4(sa[0],sa[1],sa[2],sa[3],db);
	}else return 0;
	*/
	*db++=curve_get(sa[sn-1]);
	
	return db-da;
}

