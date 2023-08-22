
const loadCountryAPI= () =>{
    const str=document.getElementById('country-name').value;
    fetch(`https://restcountries.com/v3.1/name/${str}`)
    .then(res => res.json())
    .then(data => displayCountries(data));
}


const displayCountries = countries => {
    console.log(countries[0]);
const countryHTML = getCountry(countries[0]);
const container=document.getElementById('countryDiv');
container.innerHTML=countryHTML;
}



const getCountry = (country) =>{
    //console.log(country.name.common);
    // console.log(country[0].name.common)
    return `<div>
    <h2>${country.name.common}</h2>
    <img src="${country.flags.png}">
    <h4>Population:${country.population}</h4>
    <h4>Capital:${country.capital}</h4>
    <h4>Region:${country.region}</h4>
    </div>`
    
}
