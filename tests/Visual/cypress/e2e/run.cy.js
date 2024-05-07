describe('My First Test', () => {
  it('Does not do much!', () => {
    // cy.viewport('macbook-11')
    cy.visit('/')
    cy.compareSnapshot('/', {
      disableTimersAndAnimations: true,
      scale: true,
    })
  })
})
