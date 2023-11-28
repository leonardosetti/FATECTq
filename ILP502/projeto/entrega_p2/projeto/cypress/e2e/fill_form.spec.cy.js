// main_test.spec.js

const testData = require("../fixtures/form_data.json");

describe("Web Form Filling", () => {
  beforeEach(() => {
    // Visit the web form page only once before the test suite
    cy.visit("http://127.0.0.1:5500/entrega_p2/projeto/index.html");
  });

  testData.forEach((data, index) => {
    it(`Run ${index + 1}: Fill the form with data`, () => {
      cy.get("#distroBased").type(data.distroBased);
      cy.get("#origem").type(data.origem);
      cy.get("#desktopEnv").type(data.desktopEnv);
      cy.get("#categoria").type(data.categoria);
      cy.get("#status").type(data.status);
      cy.get("#lastReleaseDate").type(data.lastReleaseDate);
      cy.get("#paginaDownload").type(data.paginaDownload);
      cy.get("#imgSize").type(data.imgSize);
      cy.get("#arqProcessador").type(data.arqProcessador);
      cy.get("#pontosAvaliacao").type(data.pontosAvaliacao);

      cy.get("#btSalvar").click();
    });
  });
});
