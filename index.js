// console.log("sadeequllah");
// console.log("Simple js date===>" + Date());

// const moment = require("moment");
// console.log(moment(new Date()).format());
// console.log("Default moment ===>" + moment().format());
// console.log("MM DD YY ==>" + moment().format("MM DD YY"));
// console.log("MM DD YYYY ==>" + moment().format("MM DD YYYY"));
// console.log("MM  YYYY ==>" + moment().format("MM  YYYY"));
// console.log("MM dddd YYYY ==>" + moment().format("MM Do YYYY"));
// console.log("dddd ==>" + moment().format("dddd"));

// console.log("MM dddd YYYY ==>" + moment().format("MM dddd YYYY"));

// console.log(moment("20000717", "YYYYMMDD").fromNow());
// console.log(moment("20010717", "YYYYMMDD").fromNow());

// console.log(moment().startOf("Y").fromNow());
// console.log(moment().endOf("Y").fromNow());

// console.log(moment().add(4, "years").calendar());

const lodash = require("lodash");

// const rasheed = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
// const sadeeq = [4, 5, 6];
// console.log(rasheed[5]);
// console.log(lodash.first(rasheed));
// console.log(lodash.nth(rasheed, 4));

// const chunks = lodash.chunk(rasheed, 3);
// console.log(chunks);

// console.log(lodash.difference(rasheed, sadeeq));
// console.log(lodash.difference(rasheed, [1, 3]));

// console.log(lodash.drop(rasheed, 3));
// console.log(lodash.take(rasheed, 3));
// console.log(lodash.fill(rasheed, 3));

// const bilal = [1, 2, 4, [5, 6, [7, [5, 6, 7, 8], 8, 8], 8], 8, 9, 9];
// // console.log(lodash.flatten(bilal));
// // console.log(lodash.flattenDeep(bilal));
// console.log(lodash.flattenDepth(bilal, 3));

// console.log(lodash.union(rasheed, sadeeq));
const persons = [
  {
    id: 1,
    first_name: "Chris",
    last_name: "Pettingall",
    gender: "Female",
    salary: 356304,
    email: "cpettingall0@icq.com",
  },
  {
    id: 2,
    first_name: "Aluino",
    last_name: "Trewinnard",
    gender: "Male",
    salary: 444777,
    email: "atrewinnard1@eventbrite.com",
  },
  {
    id: 3,
    first_name: "Dee dee",
    last_name: "Sainthill",
    gender: "Female",
    salary: 84752,
    email: "dsainthill2@fastcompany.com",
  },
  {
    id: 4,
    first_name: "Isac",
    last_name: "Partener",
    gender: "Male",
    salary: 728866,
    email: "ipartener3@behance.net",
  },
  {
    id: 5,
    first_name: "Ileana",
    last_name: "Guiduzzi",
    gender: "Polygender",
    salary: 747403,
    email: "iguiduzzi4@zdnet.com",
  },
  {
    id: 6,
    first_name: "Augustus",
    last_name: "Alderton",
    gender: "Male",
    salary: 187298,
    email: "aalderton5@ucsd.edu",
  },
  {
    id: 7,
    first_name: "Weber",
    last_name: "Elleyne",
    gender: "Male",
    salary: 443274,
    email: "welleyne6@bravesites.com",
  },
  {
    id: 8,
    first_name: "Arvie",
    last_name: "Grzegorecki",
    gender: "Male",
    salary: 338320,
    email: "agrzegorecki7@lycos.com",
  },
  {
    id: 9,
    first_name: "Archie",
    last_name: "Jaram",
    gender: "Male",
    salary: 331032,
    email: "ajaram8@nifty.com",
  },
  {
    id: 10,
    first_name: "Dannye",
    last_name: "Ambridge",
    gender: "Female",
    salary: 484097,
    email: "dambridge9@google.com",
  },
  {
    id: 11,
    first_name: "Alix",
    last_name: "Paolone",
    gender: "Non-binary",
    salary: 614434,
    email: "apaolonea@guardian.co.uk",
  },
  {
    id: 12,
    first_name: "Abbott",
    last_name: "McCray",
    gender: "Male",
    salary: 894177,
    email: "amccrayb@howstuffworks.com",
  },
  {
    id: 13,
    first_name: "Ava",
    last_name: "Kivits",
    gender: "Female",
    salary: 390642,
    email: "akivitsc@seattletimes.com",
  },
  {
    id: 14,
    first_name: "Hamish",
    last_name: "Shortell",
    gender: "Male",
    salary: 66977,
    email: "hshortelld@paypal.com",
  },
  {
    id: 15,
    first_name: "Jenniee",
    last_name: "Hiner",
    gender: "Female",
    salary: 109144,
    email: "jhinere@wj.com",
  },
  {
    id: 16,
    first_name: "Antonino",
    last_name: "Showt",
    gender: "Agender",
    salary: 541766,
    email: "ashowtf@mediafire.com",
  },
  {
    id: 17,
    first_name: "Jeremy",
    last_name: "Bilovus",
    gender: "Male",
    salary: 964171,
    email: "jbilovusg@free.fr",
  },
  {
    id: 18,
    first_name: "Donovan",
    last_name: "Sapsford",
    gender: "Male",
    salary: 435275,
    email: "dsapsfordh@state.gov",
  },
  {
    id: 19,
    first_name: "Moise",
    last_name: "Obal",
    gender: "Male",
    salary: 590048,
    email: "mobali@naver.com",
  },
  {
    id: 20,
    first_name: "Giffie",
    last_name: "Blazhevich",
    gender: "Male",
    salary: 120384,
    email: "gblazhevichj@about.com",
  },
  {
    id: 21,
    first_name: "Karlotta",
    last_name: "Gillum",
    gender: "Female",
    salary: 52825,
    email: "kgillumk@examiner.com",
  },
  {
    id: 22,
    first_name: "Roseann",
    last_name: "Murgatroyd",
    gender: "Female",
    salary: 780742,
    email: "rmurgatroydl@google.pl",
  },
  {
    id: 23,
    first_name: "Tedman",
    last_name: "Taaffe",
    gender: "Male",
    salary: 698055,
    email: "ttaaffem@cnbc.com",
  },
  {
    id: 24,
    first_name: "Gibb",
    last_name: "Guerrieri",
    gender: "Male",
    salary: 159275,
    email: "gguerrierin@fema.gov",
  },
  {
    id: 25,
    first_name: "Godfry",
    last_name: "Danton",
    gender: "Male",
    salary: 77288,
    email: "gdantono@php.net",
  },
  {
    id: 26,
    first_name: "Frazier",
    last_name: "McAreavey",
    gender: "Male",
    salary: 760829,
    email: "fmcareaveyp@shareasale.com",
  },
  {
    id: 27,
    first_name: "Lynnell",
    last_name: "Zorzini",
    gender: "Female",
    salary: 58284,
    email: "lzorziniq@de.vu",
  },
  {
    id: 28,
    first_name: "Davy",
    last_name: "Murison",
    gender: "Bigender",
    salary: 160143,
    email: "dmurisonr@jigsy.com",
  },
  {
    id: 29,
    first_name: "Carlotta",
    last_name: "Kernoghan",
    gender: "Bigender",
    salary: 2897,
    email: "ckernoghans@privacy.gov.au",
  },
  {
    id: 30,
    first_name: "Erinna",
    last_name: "Anderson",
    gender: "Female",
    salary: 624361,
    email: "eandersont@hubpages.com",
  },
];

console.log(lodash.countBy(persons, "gender"));
console.log(lodash.countBy(persons, "email"));
console.log(lodash.countBy(persons, "fname"));

console.log(lodash.groupBy(persons, "gender"));

const highsallary = lodash.orderBy(persons, "salary", "desc");
console.log(highsallary);
console.log(lodash.first(highsallary));

const lesssallary = lodash.orderBy(persons, "salary");
console.log(lesssallary);
console.log(lodash.first(lesssallary));
