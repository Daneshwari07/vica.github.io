**Course Name:** Algorithmic Problem Solving

**Course Code:** 23ECSE309

**Name:** Daneshwari Hanagandi

**SRN:** 01FE22BCS294

**University:** KLE Technological University, Hubli

**Portfolio domain:** Visa

<!-- ### Contents
1. [Introduction](#introduction) – Domain intro 🌱  
2. [Objectives](#objectives) – Goals and targets 🎯  
3. [Business Use Cases ➡️ Algorithmic Solutions 🧩](#business-use-cases-and-mapping-algorithms)  
4. [Key Learning](#learnings) – Takeaways 🧠-->

<!-- Navigation Bar -->
<!-- <div style="display:flex; justify-content:center; gap:20px; padding:20px; background-color:#f5f5f5; border-radius:10px; box-shadow: 0px 4px 10px rgba(0,0,0,0.1);">
  <a href="#home" style="padding:10px 20px; background:white; border-radius:10px; text-decoration:none; font-weight:bold; color:#000; box-shadow:0 2px 5px rgba(0,0,0,0.1);">Home</a>
  <a href="#about" style="padding:10px 20px; background:white; border-radius:10px; text-decoration:none; font-weight:bold; color:#000; box-shadow:0 2px 5px rgba(0,0,0,0.1);">About</a>
  <a href="#skills" style="padding:10px 20px; background:white; border-radius:10px; text-decoration:none; font-weight:bold; color:#000; box-shadow:0 2px 5px rgba(0,0,0,0.1);">Skills</a>
  <a href="#domain" style="padding:10px 20px; background:white; border-radius:10px; text-decoration:none; font-weight:bold; color:#000; box-shadow:0 2px 5px rgba(0,0,0,0.1);">Domain</a>
  <a href="#projects" style="padding:10px 20px; background:white; border-radius:10px; text-decoration:none; font-weight:bold; color:#000; box-shadow:0 2px 5px rgba(0,0,0,0.1);">Projects</a>
  <a href="#contact" style="padding:10px 20px; background:white; border-radius:10px; text-decoration:none; font-weight:bold; color:#000; box-shadow:0 2px 5px rgba(0,0,0,0.1);">Contact</a>
</div> -->



<!-- Introduction Section -->
<!-- <div id="home" style="background:white; padding:30px; border:2px solid #ddd; border-radius:15px; box-shadow: 0 0 10px rgba(0,0,0,0.05); margin-top:30px; max-width:800px; margin-left:auto; margin-right:auto;">
  <h2 style="font-weight:bold;">Welcome to My Portfolio</h2>
  <p style="font-size:16px; color:#333; line-height:1.6;">
    I'm <strong>Daneshwari Hanagandi</strong>, a passionate student from <strong>KLE Technological University, Hubli</strong>, currently enrolled in the Algorithmic Problem Solving course.
    This portfolio reflects the knowledge, skills, and algorithmic thinking I’ve gained as part of my engineering journey.
  </p>
  <p style="font-size:16px; color:#333; line-height:1.6;">
     As a passionate Computer Science graduate with hands-on experience in Machine Learning, Deep Learning, and intelligent system design, I am driven by the transformative potential of AI in shaping secure, seamless digital experiences.
    My projects ranging from medical image classification using deep learning to enhancing speech quality using AI have strengthened my skills in building real-world, data-driven solutions.
    I enjoy solving complex problems that require a mix of innovation, performance, and responsibility.
    Visa’s commitment to tech-driven global impact and innovation resonates strongly with my values, and I’m eager to contribute meaningfully to your mission of enabling trusted, intelligent digital commerce worldwide.
  </p>
</div>-->

---

## Contents
- [Introduction](#introduction) – Domain intro 🌱  
- [Objectives](#objectives) – Goals and targets 🎯  
- [Business Use Cases ➡️ Algorithmic Solutions 🧩](#business-use-cases-and-mapping-algorithms)  
- [Key Learning](#learnings) – Takeaways 🧠


---

# 1.Introduction
<p align="center">
  <img src="https://github.com/Daneshwari07/vica.github.io/blob/main/images/Screenshot%202025-05-28%20015532.png?raw=true" 
       alt="Visa services Screenshot" 
       width="500"> 
  <br>
  [1] Visa and various services 
</p>
<p>Visa, a global leader in digital payments, offers a secure transfer of funds across the world through its advanced financial network.These include VisaNet, Visa Direct,Contactless payments,Ecommerce payment solutions.Visa plays a key role in the future of financial technology,making it a great example of how algorithms and data structures can improve transaction speed,prevend fraud and create a better experience for customers at a global scale.</p>
The services provided by Visa include:
- **VisaNet** : Global payment processing network.
- **Visa Direct** : Real-time payment transfer.
- **Visa Cards** : Used for payments.
- **Contactless payments** : Tap-to pay transactions.
- **Fraud Protection**: Keeps card details safe.

### **VisaNet**
**VisaNet**, is the core global processing network of Visa.Approximately 65,000 card transactions per second are supported by VisaNet[2], which manages card transaction authorization, clearing, and settlement.It highlights the need of fast and efficient algorithms.

### **Visa-Direct**
**Visa-Direct**, supports real-time payments and is expected to help facilitate over $10 trillion in global money movement by 2026 [3].This highlights the need of root-optimized algorithms to handle data efficiently.

### **Tap-to-Pay**
**Tap-to-pay**, now account for more than 50% of Visa face-to-face transactions globally as of 2023 [4].This rapid tap-to-pay growth highlights the need for ultra-fast, low-latency algorithms that enable instant transaction validation and tokenized security.

## Enhancing Visa's Services with Algorithms
In today’s digital age, the efficiency and effectiveness of financial technology services can be significantly enhanced through the strategic application of data structures and algorithms. This portfolio project explores the core functionalities of Visa’s global payment systems, applying the theoretical knowledge and practical skills acquired from courses in **Data Structures and Algorithms (DSA)** and **Algorithmic Problem Solving (APS)**. By using advanced algorithmic techniques and innovative data structures, this project aims to propose solutions to real-world challenges.

This portfolio demostrates how algorithms make Visa's services more efficient, including transaction optimization, fraud detection, real-time payment routing, and system scalability within Visa’s environment.

---
<br>
# 2.Objectives

- To explore and implement algorithms that improve the efficiency of Visa's services.
- To apply theoretical knowledge from DSA and APS courses to practical,real world scenarios.
- To explore how smart algorithmic techniques can make transaction processing within VisaNet faster, more accurate, and scalable.
<br><br><br>

---
<br>
# 3.Business Use Cases➡️Algorithmic Solutions

### 1. **Card and BIN Resolution for Visa Transaction Routing**
Trie: **Trie** can be used to quickly match the card's BIN prefix by checking each digit step-by step,it following a path through a tree.This makes it very fast to identify the issuing bank or country based on the card number's first few digits.

<p align="center">
  <img src="https://github.com/Daneshwari07/vica.github.io/blob/main/images/trie.gif?raw=true" alt="Trie data structure" width="500">
  <br>
[6] Trie structure for matching prefix in card
  <br>
</p><br>

Hash Tables: **Hash tables** can be used in session and profile storage.It helps Visa to store and retrieve the user session data and card information with near instant access.This ensures quick verification during transactions.

<p align="center">
  <img src="https://github.com/Daneshwari07/vica.github.io/blob/main/images/HashTable.gif?raw=true" alt="Hash data structure">
  <br>
[7] Hash tables for storing user session data
  <br>
</p><br>

skip list: **skip list** can be used in Dynamic card information updates,it handle frequent insertions,deletions and updates to active card records.By keeping the data sorted it ensures faster access.
<p align="center">
  <img src="https://github.com/Daneshwari07/vica.github.io/blob/main/images/skipList.gif?raw=true" alt="skip list data structure" width="500">
  <br>
[8] skip list for dynamic updates
  <br>
</p><br>

**challenge** efficiently handling millions of card details

**Market Benefits** Faster card recognition during transactions,reduced transaction delays and improve user experience.

**Design techniques and Performance analysis:**

 - **Tries** Tree data structure,prefix tree
   - Time complexity: O(L) for insertion,deletion and lookup operations,where L is the length of the key.
   - space complexity: O(ALPHABET_SIZE*L) where ALPHABET_SIZE is the number of possible characters

- **Hash Table** 
   - Time complexity: O(1) for insert/delete/search
   - Space complexity: O(n) where n is number of stored items.

- **Skip Lists** Probabilistic balancing,layered linked lists
  - Time complexity: O(log n) on average for search, insertion, and deletion, where n is the number of elements in the list
  - Space complexity: O(n), where n is the number of elements in the skip list

[View Trie code here](https://github.com/Daneshwari07/vica.github.io/blob/main/codes/trie.cpp){:target="_blank"}<br>
[View hashing code here](https://github.com/Daneshwari07/vica.github.io/blob/main/codes/hash.cpp){:target="_blank"}<br>
[View skip list code here](https://github.com/Daneshwari07/vica.github.io/blob/main/codes/skipList.cpp){:target="_blank"}<br><br><br>


### 1.**Routing Algorithms for Transaction Optimization**
**Dijkstra's Algorithm** can find the most cost-effective and fastest route for a transaction between the customer's bank and the merchant's bank,when multiple intermediaries are involved. considering factors such as network latency,currency exchange rates and real-time system load.

<p align="center">
  <img src="https://github.com/Daneshwari07/vica.github.io/blob/main/images/dijistra1.gif?raw=true" alt="Dijstra algorithm">
  <br>
[5] Dijkstra's Algorithm for finding shortest routing paths
  <br>
</p><br>

Floyd-Warshall Algorithm: In Visa's network **Floyd-Warshall Algorithm** can be used for network analysis.It helps to find the shortest paths between all pairs of nodes.It precomputes all possible router between banks and payment processors,enabling fast path selection during high transaction volumes without re-running pathfinding algorithms.

<p align="center">
  <img src="https://github.com/Daneshwari07/vica.github.io/blob/main/images/Floyd_warshall_gif.gif?raw=true" alt="Floyd-Warshall algorithm">
  <br>
[6] Floyd-Warshall algorithm for finding shortest routing paths between all pairs.
  <br>
</p><br>

**Challenges:** Computing shortest paths considering traffic and road conditions.

**Market Benefits:** Faster transaction approvals,reduced processing costs,enhanced customer trust and better cross-border payment efficiency.

**Design techniques and Performance analysis:**
- **Dijkstra's Algorithm:** Greedy approach, Priority queue
  - Time Complexity: O((V + E) log V) where V is the number of vertices and E is the number of edges
  - Space Complexity: O(V) where V is the number of vertices<br>

- **Floyd-Warshall Algorithm:** Dynamic programming, All-pairs shortest path
  - Time Complexity: O(V<sup>3</sup>) where V is the number of vertices
  - Space Complexity: O(V<sup>2</sup>) where V is the number of vertices

[View Dijkstra’s code here](https://github.com/Daneshwari07/vica.github.io/blob/main/codes/dijistra.cpp){:target="_blank"}<br>
[View Floyd-Warshall code here](https://github.com/Daneshwari07/vica.github.io/blob/main/codes/floyd_warshall.cpp){:target="_blank"}<br><br><br>


### 3.Location-Based Risk Check
Visa can be used **KD-Tree** to perform fast and efficient geo-location lookups during a transaction.It is tree structure used for storing spacial data.It quickly find the nearest known locations to the user's current point by breaking down the location space into a grid.If a new location is too far from previously known ones and time gap is short,the system can flag it as potential fraud risk.

<p align="center">
  <img src="https://github.com/Daneshwari07/vica.github.io/blob/main/images/KDtree.gif?raw=true" alt="KD tree algorithm">
  <br>
[8] KD-Tree for finding location based risks] 
  <br>
</p><br>

 **challenges** Handling geographic coordinates and divice information efficiently,keeping location history updated for millions of users.

 **Market analysis** Improved fraud detection,faster transaction decisions,improves customer safety.

**Design techniques and Performance analysis:**

  - **KD tree:**
      - Time complexity: O(n logn), where n is number of locations
      - Search Time: O(n) if tree is unbalanced
      - Space complexity: O(n) where n is number of stored points.

### 4.Detecting fraud in Financial transactions
Visa builds behavioral models based on user's historical transaction patterns such as frequency,location,amount and merchant type.It can be use a **trie** to store known fraud card prefixes and merchant IDs based on past fraud.For every new transaction it checks the card number and merchant against this trie.Tries are fast at matching prefixes it can instantly find the fraud activity.

 <p align="center">
  <img src="https://github.com/Daneshwari07/vica.github.io/blob/main/images/trie1.gif?raw=true" alt="trie algorithm" width="600">
  <br>
[8] Trie data structure
  <br>
</p><br>

Hash Table: Visa can be used hash tables to store the hashed information like user devices,browser fingerprints, ip addresses and login sessions.Each of these identifiers is converted into a unique hash and stored in the system.when a new transaction is made,the system quickly checks wheather the hashed signature of the device matches the past trusted ones.If it doesn't match then the system block the transaction to prevent fraud.

<p align="center">
  <img src="https://github.com/Daneshwari07/vica.github.io/blob/main/images/hash_table.gif?raw=true" alt="Hash data structure">
  <br>
[7] Hash tables for storing user session data
  <br>
</p><br>

**Challenges**
  - Fraud must be detected within milliseconds of the transaction request.
  - Visa handles tens of thousands of transactions per second, requiring high efficiency and accuracy.
  - Balancing fraud prevention without blocking authorized users.

**Market Benefits**
  - Early fraud detection can reduce financial losses, it increases trust of users and merchants.Authorized transactions runs smoothly and fraud ones are flagged seamlessly.

**Design techniques and Performance analysis:**

   - **Trie:** tree structure
       - Time complexity: O(m) where M is length of prefix
       - Space complexity: O(nxm)
         
   - **Hash Table:**
       - Time complexity: O(1) for retriving,searching data.
       - Space complexity: O(n) 
    
[View Trie code here](https://github.com/Daneshwari07/vica.github.io/blob/main/codes/trie1.cpp){:target="_blank"}<br>
[View hashing code here](https://github.com/Daneshwari07/vica.github.io/blob/main/codes/hash_table.cpp){:target="_blank"}<br><br><br>


### 5.Network load balancing in VisaNet

VisaNet handles billions of real-time transactions daily across global data centers.It has multibal global data centers. **Segment Tree** can be used to store and update the aggregated transaction loads per region. This helps to quickly determine which region has capacity to handle more traffic.It updates load counters when transaction start or finish.

<p align="center">
  <img src="https://github.com/Daneshwari07/vica.github.io/blob/main/images/segment1.gif?raw=true" alt="segment tree">
  <br>
[9] Segment tree to store and update aggregate transaction load
  <br>
</p><br>




