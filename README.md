![Tec de Monterrey](images/logotecmty.png)
# Act 3.4 - Comprehensive Activity on Trees (Competency Evidence)

## <span style="color: rgb(26, 99, 169);">What Do I Have to Do?</span>
In this repository, you will find the input files as well as the expected outputs to test your implementation. You will also find a "main.cpp" file. You must implement your solution in this file. At the top of the file, include your personal information in comments. For example:
```
// =========================================================
// File: main.cpp
// Author: Edward Elric - A00123456
// Date: 01/01/2021
// =========================================================
```
<span style="text-decoration: underline;">Individually</span>, develop the solution for the following problem:

Consider a rooted tree. A rooted tree has a special vertex called the root. All edges are directed from the root. Vertex *u* is called the child of vertex *v*, and vertex *v* is called the parent of vertex *u* if there is a directed edge from *v* to *u*. A vertex is called a leaf if it has no children and has a parent.

Let’s define a spruce tree as a rooted tree where each of its vertices that are not leaves has at least 3 leaf children. Given a rooted tree, check whether it is a spruce tree.

## <span style="color: rgb(26, 99, 169);">**Input**</span>
The first line contains an integer *n*: the number of vertices in the tree (3 <= *n* <= 1000). Each of the following *n* - 1 lines contains an integer p<sub>i</sub> (1 <= *i* <= *n* - 1), the index of the parent of the *i* + 1-th vertex (1 <= p<sub>i</sub> <= i).

## <span style="color: rgb(26, 99, 169);">**Output**</span>
Print "Yes" if the tree is a spruce tree, and "No" otherwise.

## <span style="color: rgb(26, 99, 169);">**Sample Input 1**</span>
```
7
1
1
1
2
2
2
```

## <span style="color: rgb(26, 99, 169);">**Sample Output 1**</span>
```
No
```

## <span style="color: rgb(26, 99, 169);">**Sample Input 2**</span>
```
8
1
1
1
1
3
3
3
```

## <span style="color: rgb(26, 99, 169);">**Sample Output 2**</span>
```
Yes
```

To test your implementation, compile your program with the command:
```
g++ -std=c++11 main.cpp -o app
```
Then, test your solution with each of the input files provided in this repository (`input1.txt`, `input2.txt`, `input3.txt`, `input4.txt`). The expected results are in the files `output1.txt`, `output2.txt`, `output3.txt`, and `output4.txt`. To perform the tests, you can use the following commands. For example, to test with the file "input1.txt":
```
./app < input1.txt > mysolution1.txt
diff mysolution1.txt output1.txt
```
If the second command produces no output, you know your results are as expected.

Finally, conduct individual research and reflection on the importance and efficiency of different sorting and searching algorithms in a problem situation like this, generating a document titled **"ReflexAct3.4.pdf"**.

## <span style="color: rgb(26, 99, 169);">**How Is My Evidence Evaluated?**</span>

- **80%** - For each functionality, the evaluation will be:
    - **Excellent (80%)** - correctly passes all test cases.
    - **Very Good (60%)** - correctly passes 75% of test cases.
    - **Good (40%)** - correctly passes 50% of test cases.
    - **Insufficient (20%)** - correctly passes less than 50% of test cases.

- **10%** - The code must follow the coding standards specified in the document: <span class="instructure_file_holder link_holder">[coding_standard_link](estandar.pdf)</span>.
- **10%** - Function names in the application must be respected.

## <span style="color: rgb(26, 99, 169);">**Where Do I Submit It?**</span>
This activity is part of your final course grade as well as the portfolio of evidence for the competencies to be developed in the course. Therefore, individually:
* Submit the corresponding files for the sorting and searching algorithms in the appropriate section of this platform, along with the individual reflection document (**ReflexAct3.4.pdf**).
* Create a personal folder named **TC1031(Final_Portfolio)** to prepare for the portfolio of competencies submission at the end of the course. This folder must contain 5 subfolders:
    * Act1.3
    * Act2.3
    * **Act3.4** - place your files that solved <span style="text-decoration: underline;">activity 3.4</span> along with the individual reflection document (**ReflexAct3.4.pdf**).
    * Act4.3
    * Act5.2
