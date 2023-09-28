window.onload = () => {
  const selTheme = document.querySelector("#selTheme");
  const linkElement = document.querySelector('link[rel="stylesheet"]');

  selTheme.addEventListener("change", () => {
    const selectedTheme = selTheme.value;
    let themeFileName = "";

    switch (selectedTheme) {
      case "light":
        themeFileName = "light.css";
        break;
      case "dark":
        themeFileName = "dark.css";
        break;
      case "default":
        themeFileName = "default.css";
        break;
    }

    if (themeFileName) {
      linkElement.href = `./${themeFileName}`;
    }
  });
};
