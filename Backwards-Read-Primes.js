function backwardsPrime(start, stop){
  var result = []
  for(var i = start;i <= stop; i++){
    if(checkNum(i) && isPrime(i) && isPrime(reverse(i))){
      result.push(i)
    }
  }
  return result
}

var pattern = /^(1|3|7|9).+(1|3|7|9)$/
function checkNum(num){
  return pattern.test(num) && num != reverse(num)
}

function reverse(num){
  return (num + '').split('').reverse().join('')
}

function isPrime(num){
  for(var i = 2; i*i <= num; i++)
    if(num % i == 0) return false;
  return true;
}
