window.onload = () => {
  document.querySelector("#selTheme").onchange = () => {
    let _theme = document.querySelector("#selTheme").value;
    let linkElement = document.querySelector('link[rel="stylesheet"]');
    
    if (_theme == "light") {
      linkElement.href = "./light.css";
      document.querySelector("body").style =
        "background:#FFFFFF; color:#000000";
    } else if (_theme == "dark") {
      linkElement.href = "./dark.css";
      document.querySelector("body").style =
        "background:#2D2D30; color:#BDBDBD";
    }
  }
}
