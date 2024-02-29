use std::io::Read;
use curl::easy::Easy;

fn main() {
    let mut data = "this is the body".as_bytes();

    let mut easy = Easy::new();
    easy.url("http://localhost:3000").unwrap();
    easy.post(true).unwrap();
    easy.post_field_size(data.len() as u64).unwrap();

    let mut transfer = easy.transfer();
    transfer.read_function(|buf| {
        Ok(data.read(buf).unwrap_or(0))
    }).unwrap();
    let mut html_data = String::new();
    transfer.write_function(|data| {
        html_data = String::from_utf8(Vec::from(data)).unwrap();
        Ok(data.len())
        }).unwrap();
    transfer.perform().unwrap();
    println!("HTML body {:#?}", html_data);
}