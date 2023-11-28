// main_test.spec.js

const testData = require("../fixtures/form_data.json");

// describe("template spec", () => {
//   it("passes", () => {
//     cy.visit("https://example.cypress.io");
//   });
// });

describe("Web Form Filling", () => {
  testData.forEach((data, index) => {
    it(`Run ${index + 1}: Fill the form with data`, () => {
      // Visit the web form page
      cy.visit("http://127.0.0.1:5500/entrega_p2/projeto/index.html");

      // Replace these with the actual form field selectors
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

      // Submit the form
      cy.get("#btSalvar").click();

      // Add assertions or other actions if needed
    });
  });
});
