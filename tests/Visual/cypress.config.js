const { defineConfig } = require("cypress");
const { configureVisualRegression } = require('cypress-visual-regression')

module.exports = defineConfig({
  e2e: {
    baseUrl: 'https://php.net',
    env: {
      visualRegressionType: 'regression',
      visualRegressionBaseDirectory: 'Cypress/snapshots/base',
      visualRegressionDiffDirectory: 'Cypress/snapshots/diff',
      visualRegressionGenerateDiff: 'fail',
      visualRegressionFailSilently: false,
      visualRegressionLogger: false,
    },
    screenshotsFolder: './cypress/snapshots/actual',
    trashAssetsBeforeRuns: true,
    scrollBehavior: false,
    setupNodeEvents(on, config) {
      configureVisualRegression(on)
    }
  }
});
