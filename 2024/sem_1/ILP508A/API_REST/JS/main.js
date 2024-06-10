var dados = [];
var photos = [];

function getData() {
  $.get("https://jsonplaceholder.typicode.com/users", function (data) {
    data.forEach(dabData);
    showData(dados);
  });
}

function dabData(item) {
  let dado = {
    id: item.id,
    name: item.name,
    username: item.username,
    email: item.email,
    address: {
      street: item.address.street,
      suite: item.address.suite,
      city: item.address.city,
      zipcode: item.address.zipcode,
      geo: {
        lat: item.address.geo.lat,
        lng: item.address.geo.lng,
      },
    },
    phone: item.phone,
    website: item.website,
    company: {
      name: item.company.name,
      catchPhrase: item.company.catchPhrase,
      bs: item.company.bs,
    },
  };
  dados.push(dado);
}

function showData(valores) {
  for (let i in valores) {
    $("#divUsers").append("<H3>" + valores[i].name + "</H3>");
  }
}

//
function getPhoto() {
  $.get("https://jsonplaceholder.typicode.com/photos", function (data) {
    data.forEach(dabbPhoto);

    showPhoto(photos);
  });
}

function dabbPhoto(card) {
  let photo = {
    albumId: card.albumId,
    id: card.id,
    title: card.title,
    url: card.url,
    thumbnailUrl: card.thumbnailUrl,
  };
  photos.push(photo);
}

function showPhoto(photos) {
  for (let i =0; i < 15;i++) {
    $("#divPhotos").append("<img src=" + photos[i].thumbnailUrl + "/>");
  }
}
