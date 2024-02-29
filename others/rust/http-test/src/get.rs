use std::io::{stdout,Read, Write};
use curl::easy::{Easy, List};

// Print a web page onto stdout
fn main() {
    let mut easy = Easy::new();
    easy.url("http://localhost:3000").unwrap();
    easy.write_function(|data| {
        stdout().write_all(data).unwrap();
        Ok(data.len())
    }).unwrap();

    //headers
    let mut list = List::new();
    list.append("Authorization: Basic QWxhZGRpbjpvcGVuIHNlc2FtZQ==").unwrap();
    easy.http_headers(list).unwrap();
    easy.perform().unwrap();

   


   
    println!("{}", easy.response_code().unwrap());
}