const { defineConfig } = require('cypress')
const { configureVisualRegression } = require('cypress-visual-regression')

module.exports = defineConfig({
    e2e: {
        supportFile: false,
        env: {
            visualRegressionType: 'base',
            visualRegressionBaseDirectory: 'Cypress/snapshots/base',
            visualRegressionDiffDirectory: 'Cypress/snapshots/diff',
            visualRegressionGenerateDiff: 'fail',
            visualRegressionFailSilently: true,
        },
        screenshotsFolder: './cypress/snapshots/actual',
        setupNodeEvents(on, config) {
            configureVisualRegression(on)
        }
    }
})
