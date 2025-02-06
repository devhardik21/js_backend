// fetch in javascript
const usa_data = fetch('https://datausa.io/api/data?drilldowns=Nation&measures=Population')
    .then((response)=>(response.json()))
    .then((data)=>(console.log("data fetched successfully")))
    .catch((error)=>(console.log(error))) ;
