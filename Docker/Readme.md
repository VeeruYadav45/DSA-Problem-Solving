# All About Docker :-

## Why We Need Docker :-

- Jaise ki maan lo mai ek full-stack web Developer hu thik hai ,to common sense ki baat hogi ki mere pass ek khud ka local machine hoga hai thik hai ,aab bhai jaab machine bahut ovbious baat hogi n mai uss machine per kuch kaam krta rehta hu .

- jaise ki maan lo mere pass jo local machine hai maine uss ke andar window 11,rygen 5,mongoDb ya phir many more things jo maine apne local system per install kr liya hu thik hai .

---

- `Aab pta hai problem kaha hoti hai` jaise ki maan lo kuch month baad ek aur developer hire hua hai thik hai aur wo develope mere hi team mein hai thik ,to jo bhi maine apne local machine per install kiya tha ,to common sense ki baat hai mai usko github er push krta hi hu ,to jo developer aya new jiske mujhe kaam krna hai to mujhe btana hoga n ki mere local machine mein ye-ye hai tum isko download ya install kr lena ya phir mere github se clone kr lena.

- aab bhai kitni common sense ki baat hai jo new developer aya hoga mere team to mai usko bolunga n bhai tum bhi apne system ye saab install kr lo jisse tumko samjh mein aa jayega ki mai kiss project per au kaha per aur kya kaam kaar raha hu .

- **_Psychological fact :-_** jaab bhi hum kisi bade project per kaam wagera krte hai to `kis ko bhi pta nhi hota hai hamne kitna kuch tools wagera apne local machine mein install kiye hai`

---

## Main Problem :-🥵

- Aab bhai maan lo jo mera new buddy aya hai means ki jo mere team mein join hua hai ,to wo bhi saab kuch install karega n apne system mein to jaab wo saab kuch github se clone karega n to jitne envoirnment install kiya tha pehle developer ne thik wo saab enviornment ke version alag honge thik hai ,`aab yeha main picture start hota hai jaab new developer aya hoga kuch month baad to common sense ki baat usko bhi saab kuch basics se setup ya github se clone karna padega`

- To jaab wo saab kuch github se clone karega new developer jo bhi install karega to uske version conflict ho jayegenge jiske vajah se uska project run hi nhi karega,to ye to ek choti problem hai thik hai,aab tum sochoge ge ki ye choti problem kaise hai ....❓

- to choti problem isiliye hai ki `jo new developer hai n wo purane developer se baat krke ke jo version usne install kiya wahi same version new developer bhi install kar lega thik hai` to ye problem solve ho jayegi thik hai ,lekin pta hai ek aur problem aa jayegi yeha per...❓

- kyuki jo new developer hai wo to mac user hai aur jo purane developer hai wo to window user hai n ,so `jiske wajah se CLI to thik se work hi nhi kaar payega n`,mtlb ki window aur macbooki CLI tool aya command same to ho nhi sakti hai n

---

**_Notes :-_** Yedi hum isko Simple aur sedha Word mein bolu to `Multiple Enviornment -> Replicate nhi kaar pate hai sabse badi probelem yehi hoti hai`,aur Isi Problem ko Docker Easly solve kr deta hai

- Aur Suppose maan ker chalo saab kuch setup wagera kr liya but,`bhai jaab tum isko cloud per deploye karoge taab phir se env ko setup krna padega n` phir se issues hua to samjh rehe ho kitna problem face karna paad raha hai

---

##### Docker ka Use krke basically ek Container create krte hai jiska use krke hum muliple enviornment ko bahut easly ek hi mein rakh sekte hai :-

- Pta hai jaab bhi hum docker ki baat krte hai n to firstly hum `ek tool use krte hai` jisko hum bolte hai **Deamon** aab pta hai ye kya hota ,iska hi use krke hum easly poora kaam ko kr lete hai ,jaise ki maan lo humko kisi kaam ko scale krna hai thik hai to specially isiliye hum use krte hai ,aur pta hai jitn abhi kaam hota hai n `jaise ki images ko create krna ,image ko pull ya phir any type stuff hi kyu n wo saab kaam hum iska hi use krke banate hai`


- Aab jaise maan lo ki mere ko image create krna hai thik hai docker ke andar to hum iske liye ek command use krte hai 

```
docker run -it ubuntu

```

- to iss command ko run krte hai to pta hai ek image download hota hai aur maje ki baat to ye hai ki yedi images nhi hai n mere local machine to wo images ko install kr dega docker mere local machine mein 

- aur ye bhi case ho sakta hai maan lo jaise ki mujhe jo image download krna hai n wo pehle se hai to phir se wo usi image ko download krke ek new container create karta hai ,`aur pta hai jaise maine btaya hai n 

