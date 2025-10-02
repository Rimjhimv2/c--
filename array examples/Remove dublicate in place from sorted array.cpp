//Brute Force Approach (Set ka use karke)

//Step 1: Ek set banao
//Set automatically duplicates remove kar deta hai.
//Insert karna har element ko cost O(log N) hota hai.


set<int> st;
for (i = 0; i < n; i++) {
    st.insert(arr[i]);
}


Ye loop N baar chalega, har insert O(log N).

Total complexity = O(N log N)
//ab set m elemnt dublicate nhi hai to ab ab ham dobara array m ye non dublivate element copy pastekardenge
//esko karne ki time complexity O(n) hogi

//copy karne ka code ye raha 
for (auto it : st) {
    arr[index] = it;
    index++;
}


//st ek set hai, jisme unique sorted elements hote hain.
//auto it : st ka matlab:
//har iteration me it = set ka ek element hoga.
//pehle iteration me → it = first element of set
//dusre iteration me → it = second element of set
//aur aise hi sab elements cover karega.

