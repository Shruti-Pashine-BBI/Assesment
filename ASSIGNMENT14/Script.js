let globalVariable;
//const str = document.getElementById("country-name").value;
const loadCountryAPI = () => {
  fetch(`https://restcountries.com/v3.1/all`)
    .then((res) => res.json())
    .then((data) => {
      globalVariable = data;
      console.log(data);
    })
    .catch((error) => {
      console.log("Unable to Fetch Data");
    });
};

window.onload = loadCountryAPI();

const display = () => {
  var str = document.getElementById("country-name").value.toLowerCase();
  var IDDROOT = document.getElementById("country-Id").value;

  const displayname = globalVariable.find(
    (country) => country.name.common.toLowerCase() === str
  );
  const displayroot = globalVariable.find(
    (country) => country.idd.root === IDDROOT
  );

  if (displayname) {
    const container = document.getElementById("countryDiv");
    container.innerHTML = getCountry(displayname);
  } else if (displayroot) {
    const container = document.getElementById("countryDiv");
    container.innerHTML = getCountry(displayroot);
  } else {
    const container = document.getElementById("countryDiv");
    container.innerHTML = "<p>Country not found. Enter Valid Country Name</p>";
  }

  const GenerateJson = document.getElementById("GenerateJSON");
  GenerateJson.style.display = "block";
};

const getCountry = (country) => {
  return `<div>
      <h2>${country.name.common}</h2>
            <img src="${country.flags.png}" alt="${country.name.common}">
            <h4>Population: ${country.population}</h4>
          <h4>Capital: ${country.capital}</h4>
            <h4>Region: ${country.region}</h4>
        </div> `;
};

const searchForm = document.getElementById("Search");
searchForm.addEventListener("click", (event) => {
  display();
});

// const generateJSONButton = document.getElementById("GenerateJSON");
//     generateJSONButton.addEventListener("click", () => {
//       const countryName = document.querySelector("#countryDiv h2").textContent;
//       const img = document.querySelector("#countryDiv img").textContent;
//       const population = document.querySelector("#countryDiv h4:nth-of-type(1)").textContent;
//       const capital = document.querySelector("#countryDiv h4:nth-of-type(2)").textContent;
//       const region = document.querySelector("#countryDiv h4:nth-of-type(3)").textContent;

//         const jsonData = {
//           Country_Name: countryName.type,
//           image: img,
//           Population:population,
//           Capital:capital,
//           Region:region

//       };
//         const jsonString = JSON.stringify(jsonData, null, 2);

//         console.log("Generated JSON:\n\n" + jsonString);
//     });

const elementToJSON = (element) => {
  if (element.nodeType === Node.TEXT_NODE) {
    return element.textContent.trim();
  }

  const result = {};
  result.tagName = element.tagName;

  if (element.attributes.length > 0) {
    result.attributes = {};

    for (const attr of element.attributes) {
      result.attributes[attr.name] = attr.value;
    }
  }

  if (element.textContent.trim().length > 0) {
    result.value = element.textContent.trim();
  }

  for (const childNode of element.childNodes) {
    if (childNode.nodeType === Node.ELEMENT_NODE) {
      if (!result.children) {
        result.children = [];
      }
      result.children.push(elementToJSON(childNode));
    }
  }
  return result;
};

const generateJSONButton = document.getElementById("GenerateJSON");

generateJSONButton.addEventListener("click", () => {
  const countryDiv = document.getElementById("countryDiv");
  const jsonData = elementToJSON(countryDiv);
  const jsonString = JSON.stringify(jsonData, null, 2);
  console.log("Generated JSON:\n\n" + jsonString);
});
