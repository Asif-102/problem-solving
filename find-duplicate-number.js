const numbersArray = [4,3,6,3,4,3];

function findDuplicate(numbers){
    let numbersCount = {};

    for(let i=0; i<numbers.length; i++){

        if(numbersCount[numbers[i]]!=undefined){
            numbersCount[numbers[i]]++;
        }
        else{
            numbersCount[numbers[i]]=1;
        }
    }
    return numbersCount;
}

console.log(findDuplicate(numbersArray));