/**
        * @author: prajwalbhatia
        * @date: 28/1/19
      **/

function palinromeCheck(){
    let s = "arora";
    let i =0;
    let j= s.length-1;
    for(k = 0 ; k < s.length-1 ; k++)
    {
    if(i===j)
    {
        console.log("palindrome");
        return;     
    }
    else if(s.charAt(i) === s.charAt(j))
    {
        i++;
        j--;
    }
    else if(s.charAt(i) !== s.charAt(j))
    {
        console.log("not palindrome");
        return;     
    }
    
}
}

palinromeCheck();