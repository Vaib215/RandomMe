const inp = document.querySelector('input')
const btn = document.querySelector('button')
const shortLink = document.querySelector('.short_link')

const shorten = async(e) => {
    e.preventDefault()
    const url = inp.value
    const response = await fetch(`https://api.shrtco.de/v2/shorten?url=${url}`, {
        method: 'POST',
        headers: {
            'ORIGIN': 'https://api.shrtco.de'
        }
    })
    const data = await response.json()
    shortLink.innerHTML = `<a href="${data.result.full_short_link}">${data.result.short_link}</a>`
    
}

btn.addEventListener('click', shorten)