* * *

# Daily Codes — Day 1 (The Classical FizzBuzz Problem)

## Read the Full Article Here: [https://medium.com/code-to-express/daily-codes-day-1-the-classical-fizzbuzz-problem-24f21289a9a4](https://medium.com/code-to-express/daily-codes-day-1-the-classical-fizzbuzz-problem-24f21289a9a4)

![](https://cdn-images-1.medium.com/max/2000/1*TUYDqb8ea5aNu4mLdrS-aQ.png)

> With a huge demand for developers, competitive programming, algorithms, data structures etc has become a second choice for college students these days, although algorithmic scripting is an essential domain, not only for a student but for every individual who aspires to be a Computer Science Engineer!

I aim to bring back the importance of data structures, algorithms and practicing coding daily in the lives of coders once again! Hence I have started this [**Daily Codes**](http://codetoexpress.tech/dailycodes/) initiative.

Also, at the end of the article we will also discuss some common questions asked in the interviews (one question a day) so that in the given time frame of 60 days, one does not only get prepared technically for an interview but also be prepared mentally about the questions that can be asked.

Please note that in the interview discussion section, I will be writing the methods and answers which I found good by exploring various resources, but of course, I am not an expert, so I would be more than happy if you give your views on the questions in the comment section as well. **_Happy Learning_** ✨

To know more about the initiative, visit the website:

[**C2E: Daily Codes**
_Code To Express: We aim to make a world advanced in technology and make the youth of not only this nation, but this…_codetoexpress.tech](http://codetoexpress.tech/dailycodes/ "http://codetoexpress.tech/dailycodes/")[](http://codetoexpress.tech/dailycodes/)

### NOTE

I code in Java, C, C++, JavaScript, and Python, but it will be very time consuming to upload the answer in all the languages, hence I will be solving the problem in JavaScript (I love JS).

If you code in some other language, feel free to contribute to this repository and submit a Pull Request with your answers :)

[**CodeToExpress/dailycodebase**
_2 month data structures and algorithmic scripting challenge starting from 20th December 2018 - Coding is Fun! 💯💯 Do…_github.com](https://github.com/CodeToExpress/dailycodebase "https://github.com/CodeToExpress/dailycodebase")[](https://github.com/CodeToExpress/dailycodebase)

This way you will learn how to contribute to Open Source too in the process.
Here starts the journey of Daily Codes, Happy coding :)

### Day 1 — The Classical Fizz Buzz Problem

**Brief History —** Fizz Buzz is a group word game for children to teach them about division. Players take turns to count incrementally, replacing any number divisible by three with the word “fizz”, and any number divisible by five with the word “buzz” and any number divisible by both three and five is replaced with the word “fizzbuzz”

> For example, a typical round of fizz buzz would start as follows:

> _1, 2, Fizz, 4, Buzz, Fizz, 7, 8, Fizz, Buzz, 11, Fizz, 13, 14, Fizz Buzz, 16, 17, Fizz, 19, Buzz, Fizz, 22, 23, Fizz, Buzz, 26, Fizz, 28, 29, Fizz Buzz, 31, 32, Fizz, 34, Buzz, Fizz, …_

**Question — **Write a program that prints the numbers from 1 to **n** and for multiples of ‘3’ print “Fizz” instead of the number, for the multiples of ‘5’ print “Buzz”, and for the numbers which are divisible by both 3 and 5, print FizzBuzz.

**Do you know?** The FizzBuzz problem might seem to be a very simple problem, but still many interviewers use this problem as an initial Pass/Fail problem. How you solve this simple FizzBuzz problem can tell a lot about your knowledge.

#### But, why not hello world???

Well, I agree that printing the hello world on the screen when you code for the first time in your life is such an amazing experience. But, if you are into coding and/or development, I think that doing that Hello World program again and again in different courses for learning different languages becomes boring and a motivation killer.

Hence, I chose Fizz Buzz, which is probably the easiest problem after the “Hello World!”. Try it out yourself :)

### Solution

Okay, here I suppose that you have tried out the problem yourself and now you are willing to see the solution. Please note that if you haven’t tried out the problem yourself then there is no point in seeing the solution.

#### Method 1 (The general approach)

**Step 1:** Run a loop from 1 to n, for each iteration (i) perform the next steps
**Step 2:** if`**i**` is divisible by both 3 and 5, print “FizzBuzz”
**Step 3:** if above condition fails, and `i` is divisible by 3, print “Fizz”
**Step 4:** if above condition fails, and `i` is divisible by 5, print “Buzz”
**Step 5:** if all conditions fails, print `i` itself.

#### Method 2

Now if we look carefully, in the above mentioned method, we have too many conditions. This can be reduced in a clever way.

**Step 1:** Run a loop from 1 to n, for reach iteration (i) perform the next steps
**Step 2:** Declare a temporary empty string (inside loop, say `output`) 
**Step 3:** If `i` is divisible by 3, append `Fizz` to the output.
**Step 4:** If `i` is divisible by 5, append `Buzz` to the output.
**Step 5:** If `output` is still an empty string, set it equal to `i`
**Step 6:** Print `output`.

You might have figured what am I trying to do here, if the number is divisible by only 3, `output` variable will contain only “Fizz”, if it is divisible by only 5, `output` variable will contain only “Buzz”. In case the number is divisible by 3 and 5, both “Fizz” and “Buzz” will get appended to the `output` variable, and in case none of the above conditions match, the `output` variable is set equal to `i` in which case it will print out the current number exactly according to the question.

#### Have Another solution?

The beauty of programming lies in the fact that there is never a single solution to any problem.

In case you have an alternative way to solve this problem, do reach out to me at **theleanprogrammer@gmail.com** I will be more than happy to share your solution with the world :)

### Discussion Time

The main motivation for Daily Codes initiative were the students struggling to get a job on campus, so I started with the daily codes initiative so that we all have a habit to code daily.

Furthermore, this initiative can be much more beneficial if we discuss some frequently answered interview questions daily. Here I will keep forward my views on how to handle these questions according to what I have read from various sources on the internet. Feel free to leave in comments any suggestions or your thinking on how to tackle these questions so that everyone can be benefitted 😃

#### Things to keep in mind during an interview

*   Always be calm, and answer the question that has been asked (An interview is not a high school term-end paper where you can write stories and get marks).
*   Always think in a positive direction, negative answers reflect your negative attitude towards things
*   Don’t try to memorize the answers, just have many sessions of mock interviews before attempting any interview so that it doesn't seem overwhelming
*   _Sell what the buyer wants to buy!_ Match your abilities with the needs of the employer
*   Think for a moment before you answer, a pause is better than a wrong answer
*   Try to turn weakness into strengths, but never try to hide any weakness
*   Be optimistic and believe in yourself
*   **BE HONEST, NEVER LIE**

With these things in mind, let’s proceed with the question.

That’s it! I hope you liked the Day 1 of DailyCodes initiative. Join our slack workspace to stay up to date with the C2E initiatives. [http://codetoexpress.tech/join/](http://codetoexpress.tech/join/)

### Don’t Like Reading? Here’s the YouTube Video for you :)

### Let’s End With a Motivational Quote!

![](https://cdn-images-1.medium.com/max/1600/1*tODUVPU-K_8ZktxxALU3xw.png)

Follow us on Instagram ([@codetoexpress](https://www.instagram.com/codetoexpress/)) for daily codes, motivation and much more! 
Also, join our slack workspace and help us make a helpful community of coders: [http://codetoexpress.tech/invite/](http://codetoexpress.tech/invite/)

* * *

### Join the discussion on Whatsapp group

I have created a discussion group for CodeToExpress (Daily Codes) and learning resource sharing. In case you wish to be a part, fill out this [google form](https://goo.gl/forms/H8NgZ08K6fwjIf1l1) (I can’t share the invite link directly to prevent the community from annoying spammers, so I’ll add new members personally).

Join the Whatsapp group for Daily Codes — [https://goo.gl/forms/H8NgZ08K6fwjIf1l1](https://goo.gl/forms/H8NgZ08K6fwjIf1l1)

In case you think Whatsapp isn’t the correct platform for Tech discussion, join our Slack community :)

[**Code To Express**
_Join the slack workspace today and start discussing tech_codetoexpress.tech](http://codetoexpress.tech/invite/ "http://codetoexpress.tech/invite/")[](http://codetoexpress.tech/invite/)

* * *

That’s it for today, see you tomorrow :)

![](https://cdn-images-1.medium.com/max/1200/1*C98v28HMGQ4Zfm-Ga2Hp5Q.png)

Feel free to reach out to me anytime if you want to discuss something :D
I would be more than happy if you send your feedback or suggestions, or if you ask questions. Moreover, I love to make new friends, just drop me a mail.

> You can contact me in case if you need any assistance:
> Email: theleanprogrammer@gmail.com
> Web: [http://madhavbahl.tech/](http://madhavbahl.ml/)
> GitHub: [https://github.com/MadhavBahl](https://github.com/MadhavBahl)
> LinkedIn: [https://www.linkedin.com/in/madhavba_hl/_](https://www.linkedin.com/in/madhavbahl/)

* * *

### Disclaimer

I do not own the rights to the questions I will discuss in this Daily Codes initiative. The questions have been collected from various sources and I do not know who created all those questions. If you think you are the owner of any question or any code, send me an email at theleanprogrammer@gmail.com, I will be more than happy to give the appropriate credits.

### Special Thanks

A huge shoutout to various sources from where I learned and increased my knowledge about how one should give interviews and the various important interview questions

1.  [https://www.themuse.com/advice/how-to-answer-the-31-most-common-interview-questions](https://www.themuse.com/advice/how-to-answer-the-31-most-common-interview-questions)
2.  [http://insidetech.monster.com/careers/articles/4149-100-interview-questions-you-should-be-prepared-to-answer](http://insidetech.monster.com/careers/articles/4149-100-interview-questions-you-should-be-prepared-to-answer)
3.  [https://www.monsterindia.com/career-advice/top-100-interview-questions-to-help-you-succeed-in-a-job-interview-6943.html](https://www.monsterindia.com/career-advice/top-100-interview-questions-to-help-you-succeed-in-a-job-interview-6943.html)
4.  [https://www.monster.com/career-advice/article/100-potential-interview-questions](https://www.monster.com/career-advice/article/100-potential-interview-questions)
5.  [https://soulsearch.files.wordpress.com/2007/05/64interviewquestions1.pdf](https://soulsearch.files.wordpress.com/2007/05/64interviewquestions1.pdf)
6.  [https://www.naukri.com/blog/frequently-asked-hr-interview-questions-and-answers/](https://www.naukri.com/blog/frequently-asked-hr-interview-questions-and-answers/)

I am really grateful to these resources and hence I want to give them credits.