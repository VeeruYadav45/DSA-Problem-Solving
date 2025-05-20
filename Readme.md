# Placements Based Concepts in the Data-Structures & Algorithms 😈

## And Each Concepts Learn WithIn A Weak......👋
- Array=> ImplemeImplementation✅Question Pracrise ❌
- String
- Recursion => Implementation✅ Question Practise ❌
- SEARCHING => Implementation✅ Question practise ❌
- Sorting Algorithms => Implementation✅ Question Practise ❌
- Stack
- Queue
- LinkedList
- Tree & Binary Tree & Binary Search Tree, AVL Tree,Tree Traversal Algorithms (except AVL Tree)
- Heap (Priority Queue) ,Max Heaps, Min Heaps, Heapifications Alogirithims
- Graph ,Traversal Algorithms
- And Some Important Questions Based Algorithms , and As well as Some New Technique and Approaches
- ...............Many More Methods and As well as implementations to Multiples Way ............

--------------------------------
# RECURSION :- 🥷

- A Function Call It Self Is Called Recursion

**Notes:** Lets's Suppose maine awash ko ek copy diya thik aur wo harami same copy ko phir se mere ko hi de raha hai yehi to hota hai recursion .....

```C++
solve(int){
  - - - -
   - - - - - -
   solve(n) // aur hum yeha jo uper function likha same usi function ko call kr rehe hai aur yehi hota hai recursion
}
```

#### Desi Languages Mein :-

- Aab jaise ki humko pta hai recursion ko hum use hi isiliye krte hai kyuki yedi humko same type ka ek bada or Complex Problem mill jaye ya phir kabhi - kabhi kahi pucha jata hai to aur maje ki baat ye aa jati hai 😀 wo jo bada aur complex problem hota hai wo kisi choti problem per **Depend** hota hai just isi kaam ko krne ke liye hum recursion ka use krte hai..

1. **Recursive Relationship:**

- Let suppose jaise ki mere pass ek badi problem hai thik aur usko mujhe solve krna hai thik but humko pta hai ki recursion se solve kr sekte hai aur isko solve krte hai simply jo wo problem usko chote part mein tod kr krte hai ,**Lekin Jiss Relation Ke through Hum todte hai usko chote problem mein usi Relation ko bolte hai RECURSIVE RELATION**

```C++
2^8 = 2^4 * 2^4 // aab humne yeha per ek bade problem ko chote problme mein ek relation ke through soach kr tod diya bass ho gya....

```

2. **Base Case:-**

- Aur ye Most Important Concepts hota hai yedi recursion se koi Question bana rehe hai to ,kyuki yedi koi question hum kabhi bhi solve krte hai to hamein ye bhi to soachna hota hai ki yrr ye question ka last point kaun sa hoga **Means ki yrr ye Question ka Stoping Condtion kya hogi aur isi Stoping Conditon ko hum bolte hai ki BASE CASE**

- Aur kabhi kabhi ye bhi soechte hai n ki yedi hum base case nhi le to kya hoga ..**To Beta hum apko bta de yedi aap base case nhi wo rukega hi nhi infinte times chalega ya phir SEGEMENTATION Error aa jata hai => aur ye error isiliye ata hai kyuki \***STACK-OVERFLOW HO JAYGA**\* **

3. **Processing :-**

- Basically hum ye krte hai ki maan lo kabhi humko kuch bhi print karwana ho ya phir increment/decrement operation to jitne operation hote iss type ye saab processing ke under hi aate hai .

**Important Points**

- Jiss Function ke andar yedi **_Recursive relation End mein ata hai to usko hum bolte hai **TAIL-RECURSION** samjhe pyare 😀_**

- Jiss Function ke andar **_yedi Recursive Relation Processing ke top per ata hai to usko hum bolte hai **HEAD-RECURSION** samjh gye n pyare recursion ke bare A -> Z taak 😑_**

----------------------------------------------------------------

# SEARCHING :- 👋

- aab basically jaise ki humko pta hai **_Searching Specially 2 hi hote hai one is =>LINEAR SEARCH and other one's is BINARY SEARCH_** yehi hote hai Two typer ke

1. **LINEAR SEARCH**

- aab basically jaise ki maan lo humko ek array de diya gya thik aur aab recruiter ne bola ki isko search aur ek condtion diya ki wo array 1D hai , aab jo bhi searching ki algorithim ko hum uss time per use krenge uss algorithim ko hum bolte hai **Linear Search**

- aur Linear Search mein basically hum element ko one-one by krke chekc krte hai ki given key array mein exist kr raha hai ya nhi

```c++

int arr = {12,14,15,2,13};

int key  = 10;

// aab hum iss case mein basically one-one krke check krenge ge 10 hai ya yedi hoga to hum cout <<  kr denge aur nhi hoga to return kr denge

```

2. **BINARY SEARCH**

- Aur jaab hum Binary Search ka Use always ek thing humko yaad rakhna hota hai aur ye sabse important hai ki **Ye Searching algorithim Always MONOTONIC FUNCTION** per Depend hota hai .

- Aur MONOTONIC FUNCTION ka mtlb hota hai Element ya to Increasing Order mein ho ya to Decreasing Order mein ho

- Basically humko isiliye need hoti hai Binary Search ki kyuki complexcity ko manage krne ke liye.

- **\*HOW IT'S WORK**

- Let suppose mere pass ek array hai thik aab humko usme ek element ko search krna hai using Binary Search , aab humko pta hai n Divide and Conqure Methoda hota hai Binary search mein.

- to Bhai common sense ki baat hai n ki humko isko 2 parts mein divide krna padega yedi Divide and Conqure methode se search krna hai , aur yehi hai mere 1st step

- lekin aab ye bhi soachna padega n ki isko 2 parts mein break kaise krenge ,aur aab yeha per baat aati hai **MID - ELEMENT** aur iska hi use krke hum isko 2 parts mein todte hai

- lekin dikkat kaha hoti hai ki hamne isko tod to liya lekin humko pta bhi krna hota hai n ki jisko search krna hai wo element kaha hai left side ya right side.

- aur yehi pta karne ke liye hum apne key ke value ko compare karate hai Medium wale element se aur phir humko waha se **4 Types ke condition mill sekte hai**

- 1.  pehle case to ye hoga ki jo mere **key element** wo Equal hai midium Element se to iss case mein hum apne Mideum Element ko hi return kr dete hai .

- 2.  Second case to ye hogi ki bhai jo Mideum Element hai wo key element se chota hoga to bhai common sense ki baat hai n yedi chota hai to element right side mein hi hoga n.

- 3.  Third case to ye hoga ki bhai jo Mideum Element hai wo key element se Bada Hoga to bhai common sense ki baat hai to element Left side mein hi Element hoga n ye to common sense ki baat hai

- 4.  Fourth case aur sabse important case hai aur interview mein screening round mein max question yehi se hota hai ki bhai ye bhi to ho sakta hai n kya pta hai mere element ho hi nhi hai array mein to beta iss case 😀😀😀 hum chup - chpa return kr dete hai element not found / absent in given array.

----------------------------------------------------------------
# SORTING ALGORITHIM :- 👋

- Basically Sorted ka mtlb to bhai yehi hota hai n kisi element ko sequence wise arrange krde ho gya sorted bass, **_lekin humko pta hai isme mein bhi hum 2 Types se Element ko Sort kr sekte hai increasing order aur decreasing order mein bhi_**

- Aab Basically Sorting 7 types ke hote hai , aab iska kya mtlb inshort iska mtlb hai ki hum multiple element ko multiple way se Sort kr sekte hai mtlb ki arranged kr sekte hai .

  - **Types of Sorting :-**

1. Selection Sorting
2. Bubble Sorting
3. Insertion Sorting
4. Merge Sorting
5. Quick Sorting
6. Heap Sorting
7. Radix Sorting

--------------------------------------------------------
### SELECTION SORTING :-

- pta hai isme kya hota isme n hum multiple round ka ek game khelte hai , aab tum sochege ki multiple game se kya mtlb hai mera to isese yehi mtlb hota hai ki ,hum element ko sorted krne ke liye **SELECTION SORT** mein multiple time swap karate hai

- aur mai batata hu multiple round aur swap se kya mtlb hai let suppose tumhare pass ek arr[5] = {12,1,23,14,9}, aab pta hai isme hum 1st round chalayenge i = 0 ko compare krayenge ki sabse chota element kaun hai thik aur phir jo sabse chota hoga usko hum 1st wale element se swap kara denge , aur aab phir se i = 1 se lekr end taak comparession karate hai ye sabse important point hai **yedi ek baar koi element sort ho gya to uske next se hum compare karana st krte hai uss element ko include nhi karate hai**

- aur jaise ki pta hai ye to normally baat hai ki ,yedi sort karate hai to humara pointer n-1 taak hi chalta hai

- iski TC:-O(n^2) hota hai Worst Case mein

- Bass khtm yehi hota hai mera **SELECTION SORTING**

- iss sorting ka use humko hamesa small size ke array ke liye hi use krte hai .

**_Note :-_** Selection Sort unstable hai, kyunki same value wale elements ka order change ho sakta hai during the sorting process.

----------------------------------------------------------------
### BUBBLE SORTING :-

- Basically yedi dekha jaye to ye bhi ek sorting algortihm hi hai jo ki element ko sort krta hai

- aab isme hota hai kya jaise ki humko pta hai **SELECTION SORT** mein hum sabse choti element ko uthate hai aur i^th wale element se swap karate hai , yehi hota hai aur isme bhi hum multiple round mein sort krte hai , but the diffrence is **_BUBBLE SORT_** mein ye hota hai ki hum jitne rounde chalte hai usme uss ke largest element apne right place per chala jata hai .

- abhi maine iske uper maine ek term use kiya hai ki jitna round chalta hai usme utne round ka largest element apne right place per chala jata hai , aab isese kya mtlb hai ki , jaise maan lo maine round 1 chalaya hu thik to pta hai jo 1st largest element hai n wo apne right position per chala jata hai ,aur ye aise chalta rahega till sorted taak,example mein jaise mein 3rd round per pahuch gya aab pta hai 3rd largest element hai n wo apne right place per aa jayega.

- iska use kya hai pta hai i^th element sorted ho jata hai.

- Bubble Sort stable hai kyunki yeh equal elements ko unke original relative position mein rehne deta hai.

----------------------------------------------------------------
### INSERTION SORTING :-

- Chalo Ek exmaple btata hu ,gaw mein Taas(Card) khelte hai n , to kuch time ke liye suppose krte haii uss card per kuch number likha hai thik , aab beta ye maat puchna ki kyuki 😀 likha hai kyuki uper likha hai isi mein dhyan se padho.

- aab Bakchodi chodo btaw aab , to pta hai n ki taas mein jaab st hota hai pehle ko mix krte hai thik , to yeha per bhi maine mix kr diya thik , lekin hamne to uper number assume kiya to aan ye number randomly order mein honge aur humko short krna hai

- to pta hai kya krte hai (1,5,2,3,4), jaise ye number hai thik , to umko isko sort krna hai thik , to st krte hai 1 se

- 1 apne right position per hai , phir move 5 per iska comparision karwate hai aab 5 se chota hai to 5 ke phle la denge (1,2,5,3,4),phir aab 2 right per aa gya thik aur phir 5 ko 5 ke next se compare kerenge 3 to chota hai ti 3 ko 2 aur 5 ke bich mein layenge (1,2,3,5,4), aab 5 ko again 4 se karenge phir chota hai 4 to 5 se pehle 4 ko layenge and last finall ans (1,2,3,4,5)

  - **Important Point** aur sabse important baat insertion sort mein swap nhi krte hai shift krte hai.

----------------------------------------------------------------
### MERGE SORTING :-

- aab baat krte hai merge sort hota kya hai , to sayed tumko yaad hoga ki tumne Binasy Search mein ek method padha tha usko bolte hai **Divide Conquer** aur yedi nhi padhe hoge to , bina bakchodi kiye jaw pehle usko padho thik.

- aab baat krte hai humko binary Search padhna jaruri kyu hai merge sort se pehle se , to beta ji jiss method ka use krke hum merge sort krte wo method binary search se hi ata hai jisko bolte hai **Divide Conqure**

- aab ye maat puch lena sale ki Divide and Conqure method kya hota kyuki beta iske bina tum binary search nhi padh pawge 👉

- aab jaise hum Binary search mein mid Element ko nikal krke usko divide krte the n same yehi kaam karenge merge sort mein bhi ,**Lekin jo difference wo itna bada nhi hai jitna ki log bolte hai merge sort ye hai wo hai aree kuch nhi bhai application hai binary search ka yedi dekha jaye to , aab tum sochge aise kaise bol diya , to simple si baat same kaam hi karene binary search wala ,aur jaab taak taab-taak single element nhi ho jaye samjh rehe ho**

- aab ji single element bachega n usko jaab merge karoge n to pehle sort krna phir merge krna ok aur lo gya hai Merge Sort yehi to tha

- aur sabse important point aur ye bhi ek diffenrece hai ki , binary search mein hum recurievly nhi kcuh krte the ,but iss case mein hum Recursivly todte hai

- aur iska T.C :- O(nlogn) , aur ye bahut simple sorting ka tc hota hai O(n), aur binary search ka hota hai O(logn), aur humko pta hai isme dono kaam kaar rehe hai isiliye dono ko multiply kr diya => O(nlogn) aa jayega

- aur apke knowledge ke liye hum bta de ki sabse Fast hota hai ,ye Sorting Algorithim as compare to other sorting algorithime mein

- aur iska Simple Sa Answer hai kyuki isme saab kuch recursivly hota hai isiliye ye fast hota hai

**Important** Hum iss Sorting Algorithim ko 2 Approach se implement kr sekte hai

- 1st Approach is **_Create a new array and copy value_**

- 2nd Approach is **_Using Indexing_**

----------------------------------------------------------------
### QUICK SORTING :-

- Basically jaise ki pta hai humko ki ye bhi ek type ka sorting algorithim hi hai aur kuch nhi hai

- aur isme bhi yehi hota hai maan lijiye humko ek input mein arr diya gya hai aur usko sort krna by the help of Quick Sorting .

**_Quick Sort hota kya hai_**

- Basically dekha jaye to jo quick sort hota hai n ye bilkul opposite hota hai merge sort ke,**jaise ki hmko pta hai merge sort mein kya hota hai further recursivlly divide hota hai but quick sort mein aisa nhi hota**

**_How It's Work :-_**

Step 1:

- maan lijiye humko ek array mila thik [3,5,,8,2,4] thik aur phir pta hai kya krna hota hai ,iss given array mein se n hum ek element utha ke thik usko right place(mtlb jaha per usko actual mein hona chaiye) per rakh de **aur sabse important baat jaha per maine element ko rakha hai humko pta kaise chalega ki ye right place per aa gya hai ,to isko pta krne ke liye humko dekhna padta hai ki , jo element ko hamne rakha hai uske left mein usese chota element hona chaiye aur uske right place per usese bada element hona chaiiye,aise hi humko pta chalta hai wo element right place per aa gya hai**

- Example: [3,5,,8,2,4] ,isme 3 ko maine uthaya thik aab hum pta karenge ki 3 ke left mein chota element hai ya nhi aur 3 ke right mein usese bada element hai ya nhi ,yedi aisa hua to 3 apne right place per aa gya hai .

- aur pta hai ye jo process ho raha hai n hum isko hi bolte hai **Partitioning krna**

Step 2:

- basically pta hai isme kya hota aab hamne to ek element ko right place per rakh diya ,aur baaki to recursion kr dega baas yehi hota hai

**Note :-** Aur Quick Sort 2 Step process hota hai

- **_Partitioning kaise krte hai_**

- to pta hai kya hai jiss element ko hum right place per rakhte hai n usko hi **pivot Element bolte hai**,aur phir pta hai aab count karte hai ki kitne element pivot element se se chota hai,aur ye kaam hum isiliye kr rehe hai jisse ki jo mera pivot element hai wo right place per chala jaye.

- Time Complexity: O(n log n) on average and O(n2) in worst case
- Auxiliary Space: O(log n) on average and O(n) in the worst case.
- aur ye bhi algorithm **unstable sorting algorithm**hai

- **_Stable Sorting Algorithms:_**

- 1.  Bubble Sort
      Process: Elements ko repeatedly adjacent pairs mein compare karke swap karte hain.

      Stability: Agar do elements equal hain, toh unka original order disturb nahi hota.


- 2. Insertion Sort
     Process: Ek element ko apne correct position mein insert karte hain.

     Stability: Equal elements ko unka order maintain karke shift kiya jata hai.


- 3. Merge Sort
     Process: Array ko divide karke sort kiya jata hai aur phir merge kiya jata hai.

     Stability: Merge operation equal elements ka order maintain karta hai.


- 4. Counting Sort
     Process: Count array ka use karke elements ko sort karta hai.

     Stability: Indexes ka use karke equal elements ka order maintain hota hai.


- 5. Tim Sort (Hybrid of Merge Sort + Insertion Sort)
     Process: Merge Sort aur Insertion Sort ka optimized combination hai.

     Stability: Designed to be stable.


- 6. Radix Sort
     Process: Counting Sort ka use karke digits (place value) ke hisaab se sort karta hai.

     Stability: Counting Sort ke stable nature ki wajah se Radix Sort bhi stable hota hai.

  **_Unstable Sorting Algorithms:_**

Quick Sort
Heap Sort
Selection Sort

----------------------------------------------------------------
# TREE :- 👋

- Basically tree ek non-linear data structure hota hai , aab non-linear data structure hi kyu bol rehe hai pta hai kyu,kyuki tree ka form ek herarically structured mein hota hai isiliye tree ko non-linear bola jata hai,aur basically isme hum ek node ko multiple node se connect kr sekte hai ,**but linear data structure mein aisa nhi hota hai ki ek node ko multiple node se connect krde** 

- aur pta hai tree mein basically hum ek node ko n multiple node se connect kr sekte hai easly koi limitations nhi hota hai ki iss node ke niche itna hi element hona chaiye.


### Aur pta hai Tree ke liye bhi hum diffrenet types ke termonology defined kiya gya hai :-


* Majorly yehi hote hai :-

1. Node :- Basically ye tree ke data/value ko hold krta hai bass
2. Root
3. Parent
4. Child
5. Sibling
6. Ancestor
7. Decendent
8. Leaf

----------------------------------------------------------------
## Binary Tree :-

- Basically dekha jaye to ye bhi ek tarah ka tree hi hota hai bass isme kya hota hai haar parent ke maximum 2 hi child ho sekte hai ,that's the reason why it is called Binary Tree .


**Important Point :-** kisi bhi type ke humko tree ko define krna hota hai to any how minimum 3 things ki requird hoti hi hai ,iske bina hum tree ko define nhi kaar sekte hai 

1. data
2. left node
3. right node

```c++
#include <iostream>
using namespace std;

class node {
  public:
  int data; // data
  node* left; // left node
  node* right; // right node
}

int main (){
     return 0
}

```
- aab dekha jay n to ye bahut common sense ki baat hai but kaafi important hai ,kyuki bahut logo ko yehi pta nhi hota hai kisi tree ko define krne ke liye kya need hoti hai.

- aur basically jaab bhi hum st krte hai to sabse pehle left node se hi st krte hai


***TRAVERSAL Technique***

1.   -  **Label Order Traversal**

- Level order traversal ek tree traversal technique hai jisme hum tree ke nodes ko level by level visit karte hain, yani pehle root node, phir uske immediate child nodes, aur phir unke child nodes ko visit karte hain.

- **How to Solve this Traversal Apporach :-**

- aur pta hai jaab bhi hum lebel order traversal krte hai to **queue** ka hi use krte hai maximum case mein 

***Queue Kyun Use Karte Hain?***

- Level order traversal ek Breadth-First Search (BFS) technique hai, aur BFS ka main concept yeh hota hai ki har level ke saare nodes ko ek ek karke process karte hain. Queue ek FIFO (First In, First Out) data structure hota hai jo is kaam ke liye perfect hai, kyunki:

- Queue ka nature hume pehle aayi cheez ko pehle process karne ki facility deta hai.
Jab hum ek level ke nodes ko process karte hain, to unke child nodes ko queue mein enqueue karte hain (add karte hain) aur parent node ko dequeue karte hain (remove karte hain).

 #### Very Important Concept:-

***  Inorder | PreOrder | PostOrder  :-***  

 - InOrder :- ***L.N.R*** Iska mtlb pta hai iss case mein n pehle hum kabhi bhi aur kisi bhi condition mein pehle **left Element** ko print krte hai aur phir **Node Element** (iska mtlb middle element) aur phir last mein **right Element** ko print krte hai.

- ***Important Point :-*** pta hai jaab hum inOrder nikalte hai n to,wo data always sorted hota hai.

 - PreOrder :- ***N.L.R*** Iska mtlb pta hai iss case mein n pehle **Node Element** ko print krte hai (Middle element ko) aur phir **left Element** ko print krte hai aur phir last mein **Right Element** ko print krte hai 

- PostOrder :- ***L.R.N*** Iska mtlb pta hai iss case mein n pehle hum kabhi bhi aur kisi bhi condition mein pehle **left Element** ko print krte hai aur phir **Right Element** ko print krte hai aur phir last mein **Node Element** (iska mtlb middle element) ko print krte hai.

***Reverse Order  Traversal :-***......? 

----------------------------------------------------------------
## Binary Search Tree :-

- pta hai binary search tree kya hota , basically iska mtlb ye hota hai ,`yedi jaha per every node ke left subtree chote honge aur right subtree usese bade honge,yedi kahi per bhi tree ki ye property follow krti hai to usko hi bolte hai binary search tree`

- chalo iske thoda visualise krte hai maan lo koi number hai jisko hum `n` se denote kr rehe hai thik aur yedi ye number mere `root->data` se `smaller` hai to hum isko `left` mein daal denge aur yedi `root->data`node se `greater` hua to isko `right` mein daal denge.,baas yehi hota iska algo bhi khtm .

### How Can We Search an Element in Binary Search Tree? :-

- pta hai ye n bahut easy hai, aab btata hu kya jo concept hai n binary search tree ka same wahi hai aab bass usko code mein implement kardo ho ho gya **Searching**

### How Can We Insert a Element in a Binary search Tree :-

1. - Pehle check karenge ki jo root element ka data hai wo null to nhi hai phir yedi null rahega false kar denge.

2. - aur phir yedi root element null nhi hua hai n, to hum compare karenge ki root ke element se data small hai ya greater hai in ,phir yedi jo data humko insert krna hai usko karenge yedi small hai to left mein karenge aur greater hua to right mein dalenge...

### How Can We Delete a Element in a Binary search Tree :-

--------------------------------

- let suppose yedi mere ko koi bhi element delete krna hai to sabse pehle to humko waha taak pahuchna padega n tabhi to hum koi cheje delet kaar payenge,lekin humko waha taak pahuchne ke liye ye bhi dekhna padega n ki yedi wo element mein tree mein exits krta hai ya nhi yedi krta hai to thik hai aur yedi nhi krta hai taab kaha se delete karenge thik 

- aab jaab pta kar lenge hamra element tree ke andar exist kr raha hai to aab hamra approach kya hoga ki jiss element ko humko delte krna hai kya wo jo mere given element hai usese bada hai ya chota hai yedi bada hai to right mein chale jayenge aur chota hai to left mein chale jayenge n bhai ,kyuki BST ka concept hi yehi hota hai isiliye hamne aisa bola hai

- ***Aab hum 4 way se hum delete kr sekt hai kisi bhi element ko***
----------------------------------------------------------------

1. - maan lo yedi kisi `element ke child hi nhi hai mtlb ki (0) element hai` to simply hum usko delete kr kr denge aur tree se bahar chale jayenge,aur jo mera root element hai usko null ko point kara dunga.

2. - maan lo yedi kisi element ke `1` child hai to ,**to pta hai isme n 2 case baan jayenge kyuki ,aab humko check krna padega n ki yedi jo element hai wo bada ya chota hai ye bhi dekhna padega n aur jaise ki pta hai yedi bada hua to right mein chale jayenge aur chota hua to left mein chale jayenge 

3. - man lo yedi kisi element ke `2` child hai to ,ye thoda acha concept hai aur thoda isme jyada dimmag lagana padta hai ,maan lo mere root element hai 50 aur iske 2 child hai ek hai 25 hai left wala aur right wala hai 70 aab humko delte krna hai 50 ko to pta hai `pehle to hum 50 ko 25 se replcae kr denge phir hum 25 ko delte kr denge aur phir jo humne replace kiya tha 50 25 se usi 25 ko return kr denge hai to aise hota hai deltion 2 child ke case mein.


# LINKEDLIST :-👋

- pta hai linked list ek type ka `linear data structure hai` jo n `collection of node se mill kr banta hai` 

- aur jaise ki pta hai humko ki kisi bhi type ke linked-List ko define krne ke liye **humko 2 chij to chaiye hi chaiye aur ye compulsory hai kyuki iske bina hum kisi bhi type ke linked-list ko create nhi kaar sekte hai ,pehla hai ek element banate hai(aab wo element/data kisi bhi type ka ho sakta hai mtlb ki int,char,str any datatype) ,aur doosra hai ek pointer banate hai jo uske next ko point karata hai**


```c++

#include <iostream>
using namespace std;

class Node {
    public:
        int data; // ye ke int type ka data ho gya
        Node* next; // aur ye ek pointer ho gya jo ki next element ko point karata hai ,aur ye dono to honge hi by defult ****
};
int main() {
  
    return 0;
}

```

- **Node** basically pta hai node n ek type ka `entity hai` (jiske andar n ek data hota hai aur ek next node ka address hota hai ye shirf mai linkedlist ke andar hi bta raha hu actual mein node ka mtlb kuch aur hota hai ,wo humko pta hai.)

- ***Lekin Humko Linked-List chaiye kyu bhai :-***pta hai kyuki jaab hum array ke case mein jo kuch bhi krte hai to usko run time per change nhi kaar pate hai n isiliye aur yehi kaam karne ke liye humko linked list ke need hoti hai (jaise ki maan lo mera array ka size hai 10 -> arr[10] => aab maine isko bol raha hu n ki run type per arr ki size ko 20 kar do lekin ye to possible hi nhi hai n array ke case mein aur yehi kaam krne ke liye humko linked list ke need padi)

- aur jaise ki pta hai `linked list ek type dynamic data Structure hota hai`(aur aab iska mtlb hota hai hum isme grow/shrink kara sekte hai element ko run time per 😑) aur isme limit nhi hota mtlb ki hum jitna chahe utna grow/shrink kar sekte hai aur haan hum 0 taak bhi shrink kr sekte hai ,**aur jaab hum grow/shrink kaar rehe hote hai n iska sabse bada ye advantage hota ki ye memory waste nhi krta hai .**

- aur pta hai maje ke baat to ye hai bhai ki linked-list ke case mein insertion/deletion bahut hi easy hote hai hai **(iska reason hai ki isme kisi bhi type ki shifting nhi krna padta hai aur shrinking bhi)**,`but hum yehi kaam krte n array ke case mein to jaise ki pta hai yedi hum array mein kisi element ko insert krte hai middle mein to next element ko shift krna padta hai ya phir hum delete krte hai kisi element ko to shrink krna padta hai to maintain a order`

- aur pta hai linked-list ke case me continuous storage ki need nhi hota hai ,but jaise ki pta hai array ke case mein continues stora hi hota hai .
----------------------------------------------------------------

## Types Of Linked List :-


1. - Singly linked list
2. - Doubly linked list
3. - Circular linked list
4. - Circular  Double linked list

----------------------------------------------------------------

### SINGLY LINKED LIST :-






1. - ***INSERTION IN SINGLY LINKED LIST***

- aab pta hai kaise hum kisi singly linked list mein kisi elemnt ko insert krte hai ,jaise ki humko pta hai ki linked-list mein by default jo 1st block hota hai usko `Head` bolte hai aur second hota hai usko `Head ka next bolte hai` aab pta hai kya hai hum ek temp variable mein ek naya block create kerenge thik aur jo temp variable banayenge n uske next pointer ko hum Head ko point kara denge(temp->next = Head) ,aur phir jo temp variable tha to aab hum usi temp mein head ko assign kara denge kuch iss tarah(temp = Head)




# ARRAYS :-👋

### Why We Need Of Arrays :-

- Chalo mai ek kaha btata hu` maan lo jaise ki 2 number ko compare karo aur btaw isme se bada kaun taab to hum easly bana denge ,lekin yedi hum 2 number ke placer per 20,000 le liye to taab kaise btawgi ji`

- aur isi problems ko solve karne ke liye Array ki need padi . aur yehi tha kahani

### What Is Arrays ...?

- pta hai aap kabhi-kabhi market mein jate ho to mummy bolti hongi ki beta aaj shirf ek hi sabji lekar ana hai aur aap kya krte ho ji thaila mumy di hoti hai n usi thaile mein shirf wahi 1 type sabji ko rakh lete ho aur lekar chale jaate ho

- same thing arrays bhi bolta hai ki yedi dekho mere ko use krna hai to `mai ek time per ek hi type ke data ko read kr sakta hu` ya to wo poora integer hi ho ya to wo poora float hi ho ya to wo poora string ya char hi and show on

- To Basically ye hota hai arrays ki jisme hum similar typ ke element ko daal sekte hai 

- Aur ye to bahut hi basics baate hai ki Array jo hota hai n wo contigious location ke basis per kaam krta hai 

- Aur sabse important baat to ye hai ki yadi maan lo humko arrays ke andar kisi bhi element ko find krna hai n to hum indexing ka use kr sekte hai jo kaafi important way hota hai kisi bhi element ko find karne ke liye in case fo arrays

```C++

int beta[10]; // Aab pta hai iska mtlb hai n ki ek array bana hai jiska name hai beta aur  iske andar 10 value present hai  

#include <iostream>
using namespace std;

int main(){
   int beta[5]; // isko bolte hai array ko declare krna

   cout << "The Value of beta at 5 is "<< beta[4] << endl;

   cout << "Tha value of 2 is " << beta[2] << endl;

   int awash[2] = {1,2}; // Isko bolte hai arrays ko initalise krna
int abhishek[20] = {12,14};
   
   for (int i = 0; i < 20; i++)
   {
      cout<< "The value of i is " << abhishek[i] << endl; // Aur pta hai aab dekho yeha per maine size to liya hai 20 but initialise maine shirf 2 element ko kiya hai to pta hai iss case mein uss 2 element ko chod ker sabke place per 0 hi ayega mtlb 12 ,14 baaki 17 jagah per 0 hi ata hai aise case mein
   }

   int battery2[23] = {12,14,16};

int sizeofBattery2 = sizeof(battery2)/sizeof(int); // iska hi use karke hum kisi bhi arrya ka size bahut easly find kaar sekte hai,lekin pta hai isme ek error hai aur wo ye erroe hai ki hamne to battery2 ke andar 3 hi element ko initialise kiya hai n .........?🤔


   // Character Arrays :-👉

   char ashu[12] ;

   return 0;
}

```

- Entire Array ko kisi bhi value se kaise initialize kar sekte hai ....?

- Aur jaise ki pta hai Bahut hi general baat hai ki `arrays ke case mein Size i se lekar se n-1 taak jata hai `

- 