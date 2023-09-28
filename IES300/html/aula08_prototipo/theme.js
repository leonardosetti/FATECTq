window.onload = () => {
  document.querySelector("#selTheme").onchange = () => {
    let _theme = document.querySelector("#selTheme").value;
    let linkElement = document.querySelector('link[rel="stylesheet"]');

    if (_theme == "light") {
      linkElement.href = "./light.css";
    } else if (_theme == "dark") {
      linkElement.href = "./dark.css";
    } else if (_theme == "default") {
      linkElement.href = "./default.css";
    }
  };
};
