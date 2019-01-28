  /**
        * @author: prajwalbhatia
        * @date: 28/1/19
      **/
function reverseString()
{
    let string = "Prajwal Bhatia";
    let reverse = '';
    for(let i = string.length-1 ; i >=0 ; i--)
    {
        reverse += string[i];
    }
    console.log(reverse);
}

reverseString();