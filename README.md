First university project about using basic programming techniques.

//temp 


figure
k=2;
T=1;
num = k;
den = [T 1];
sys = tf(num,den);
step(sys)
hold on


k=3;
T=1;
num = k;
den = [T 1];
sys = tf(num,den);
step(sys)


k=4;
T=1;
num = k;
den = [T 1];
sys = tf(num,den);
step(sys)

hold off





figure
k=2;
T=2;
num = k;
den = [T 1];
sys = tf(num,den);
step(sys)
hold on


k=3;
T=2;
num = k;
den = [T 1];
sys = tf(num,den);
step(sys)


k=4;
T=2;
num = k;
den = [T 1];
sys = tf(num,den);
step(sys)

hold off




figure
k=2;
T=4;
num = k;
den = [T 1];
sys = tf(num,den);
step(sys)
hold on


k=3;
T=4;
num = k;
den = [T 1];
sys = tf(num,den);
step(sys)


k=4;
T=4;
num = k;
den = [T 1];
sys = tf(num,den);
step(sys)

hold off



figure
k=2;
T=1;
ksi = 0.7;
num = k;
den = [T 1];
sys = tf(num,den);
step(sys)
hold on


k=2;
T=2;
num = k;
den = [T 1];
sys = tf(num,den);
step(sys)


k=2;
T=4;
num = k;
den = [T 1];
sys = tf(num,den);
step(sys)

hold off



figure
k=3;
T=1;
ksi = 0.7;
num = k;
den = [T 1];
sys = tf(num,den);
step(sys)
hold on


k=3;
T=2;
num = k;
den = [T 1];
sys = tf(num,den);
step(sys)


k=3;
T=4;
num = k;
den = [T 1];
sys = tf(num,den);
step(sys)

hold off


figure
k=4;
T=1;
ksi = 0.7;
num = k;
den = [T 1];
sys = tf(num,den);
step(sys)
hold on


k=4;
T=2;
num = k;
den = [T 1];
sys = tf(num,den);
step(sys)


k=4;
T=4;
num = k;
den = [T 1];
sys = tf(num,den);
step(sys)

hold off


