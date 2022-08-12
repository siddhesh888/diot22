let a = {
    "Session":"Iot protocols",
    "Location":{
            "Building":"cdac",
            "Class":5
    },
    "Students":[
            {
                "name":"Ram",
                "age":16,
            },
            {"name":"Shayam",
                "age":18,
            }
    ]
}
// console.log(a);
// console.log(a.name);
// console.log(typeof(a));
// a=JSON.stringify(a);
// typeof(a)
// console.log(typeof(JSON.stringify(a)))
// console.log(a)
a=JSON.parse(a);
console.log(a)